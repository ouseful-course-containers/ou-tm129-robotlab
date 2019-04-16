FROM danielguerra/ubuntu-xrdp

#Required to add repo
RUN apt-get update && apt-get install -y software-properties-common


RUN dpkg --add-architecture i386

RUN wget -nc https://dl.winehq.org/wine-builds/winehq.key
RUN apt-key add winehq.key
RUN apt-add-repository 'deb https://dl.winehq.org/wine-builds/ubuntu/ xenial main'
RUN apt update && apt-get install -y --install-recommends winehq-stable


#Not sure these are the correct versions?
#These don't run properly, and wine still wants to run its own downloads
#RUN wget http://dl.winehq.org/wine/wine-mono/4.8.1/wine-mono-4.8.1.msi
#RUN wget http://dl.winehq.org/wine/wine-gecko/2.47/wine_gecko-2.47-x86.msi
#RUN wget http://dl.winehq.org/wine/wine-gecko/2.47/wine_gecko-2.47-x86_64.msi
#RUN wine msiexec /i wine_gecko-2.47-x86_64.msi
#RUN wine msiexec /i wine_gecko-2.47-x86.msi
#RUN wine msiexec /i wine-mono-4.8.1.msi

#For Jupyter
RUN apt-get update && apt-get install -y python3.6 python3-pip

RUN pip3 install --no-cache notebook jupyter-server-proxy

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


COPY Apps/  /opt/Apps

COPY usr /usr
RUN chmod +x /usr/share/applications/robotlab.desktop
RUN chmod +x /usr/share/applications/neural.desktop


#TO DO - this is RDP NOT novnc... need a novnc for Binder?
## profile.d environment vars
#These were required for dit4c; what happens in this case with / without this?
#COPY etc /etc

#docker build -t testjrobotlab .
#docker run  --name tm129  --shm-size 1g -p 3391:3389 -d testjrobotlab
 
