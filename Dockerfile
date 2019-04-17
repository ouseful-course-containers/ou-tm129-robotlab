#FROM lanrat/docker-xpra-html5

#The following is built on ubuntu:bionic
#https://github.com/ouseful-backup/docker-xpra-html5
FROM ousefuldemos/docker-xpra-html5

USER root

#Required to add repo
RUN apt-get update && apt-get install -y software-properties-common wget


RUN dpkg --add-architecture i386

RUN wget -qO- https://dl.winehq.org/wine-builds/winehq.key | apt-key add -
RUN apt-add-repository 'deb https://dl.winehq.org/wine-builds/ubuntu/ bionic main'
RUN apt update && apt-get install -y --install-recommends winehq-stable


#Not sure these are the correct versions?
#These don't run properly, and wine still wants to run its own downloads
RUN mkdir -p /home/user/.cache/wine
RUN wget http://dl.winehq.org/wine/wine-mono/4.8.1/wine-mono-4.8.1.msi -O /home/user/.cache/wine/wine-mono-4.8.1.msi
RUN wget http://dl.winehq.org/wine/wine-gecko/2.47/wine_gecko-2.47-x86.msi -O /home/user/.cache/wine/wine_gecko-2.47-x86.msi
RUN wget http://dl.winehq.org/wine/wine-gecko/2.47/wine_gecko-2.47-x86_64.msi -O /home/user/.cache/wine/wine_gecko-2.47-x86_64.msi

USER user
RUN wine msiexec /i /home/user/.cache/wine/wine_gecko-2.47-x86_64.msi
RUN wine msiexec /i /home/user/.cache/wine/wine_gecko-2.47-x86.msi
RUN wine msiexec /i /home/user/.cache/wine/wine-mono-4.8.1.msi
USER root

#Use the recipe in https://blog.ouseful.info/2019/03/11/running-microsoft-vs-code-remotely-xpra-and-rdp/
#for starting with RobotLab

COPY Apps/  /opt/Apps

#COPY usr /usr
#RUN chmod +x /usr/share/applications/robotlab.desktop
#RUN chmod +x /usr/share/applications/neural.desktop

## profile.d environment vars
#These were required for dit4c; what happens in this case with / without this?
#COPY etc /etc

ADD robotlab.sh /usr/local/bin/robotlab
RUN chmod +x /usr/local/bin/robotlab

ADD neural.sh /usr/local/bin/neural
RUN chmod +x /usr/local/bin/neural

#Pulseaudio also has a switch in cmd
#Can't get this working atm...
#RUN apt-get install -y pulseaudio

#For Jupyter
#RUN apt-get update && apt-get install -y python3.6 python3-pip


#Go back to user...
USER user


#RUN pip3 install --no-cache notebook jupyter-server-proxy

# For Binderhub - create user with a home directory
#Without Binderhub set defaults here?
#ARG NB_USER
#ARG NB_UID
#ENV USER ${NB_USER}
#ENV HOME /home/${NB_USER}

#RUN adduser --disabled-password \
#    --gecos "Default user" \
#    --uid ${NB_UID} \
#    ${NB_USER}
#WORKDIR ${HOME}
#USER ${USER}

#TO DO
# Add in Jupyter server proxy files
# Start Jupyter server
# Use the original CMD as a proxy starter
# Use a Jupyter CMD to start the container


ENV start robotlab

#Start with robotlab
CMD xpra start --bind-tcp=0.0.0.0:10000 --html=on  --exit-with-children --daemon=no --xvfb="/usr/bin/Xvfb +extension Composite -screen 0 1920x1080x24+32 -nolisten tcp -noreset" --pulseaudio=no --notifications=no --bell=no --start-child=${start}


#Example image pushed as 
#docker build -t ousefuldemos/tm129robotics-xpra-html5 .
#Default runs robotlab
#docker run --name tm129x --shm-size 1g -p 3395:10000 -d ousefuldemos/tm129robotics-xpra-html5
#docker run --name tm129x --shm-size 1g -p 3395:10000 -e start=robotlab -d ousefuldemos/tm129robotics-xpra-html5
#docker run --name tm129x --shm-size 1g -p 3395:10000 -e start=neural -d ousefuldemos/tm129robotics-xpra-html5
