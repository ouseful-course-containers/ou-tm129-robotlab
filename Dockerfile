FROM danielguerra/ubuntu-xrdp

#Required to add repo
RUN apt-get update && apt-get install -y software-properties-common


RUN dpkg --add-architecture i386

RUN wget -nc https://dl.winehq.org/wine-builds/winehq.key
RUN apt-key add winehq.key
RUN apt-add-repository 'deb https://dl.winehq.org/wine-builds/ubuntu/ xenial main'
RUN apt update && apt-get install -y --install-recommends winehq-stable


#Not sure these are the correct versions?
#Thet do't run properly, and wine still wants to run its own downloads
#RUN wget http://dl.winehq.org/wine/wine-mono/4.8.1/wine-mono-4.8.1.msi
#RUN wget http://dl.winehq.org/wine/wine-gecko/2.47/wine_gecko-2.47-x86.msi
#RUN wget http://dl.winehq.org/wine/wine-gecko/2.47/wine_gecko-2.47-x86_64.msi
#RUN wine msiexec /i wine_gecko-2.47-x86_64.msi
#RUN wine msiexec /i wine_gecko-2.47-x86.msi
#RUN wine msiexec /i wine-mono-4.8.1.msi


COPY Apps/  /opt/Apps

COPY usr /usr
RUN chmod +x /usr/share/applications/robotlab.desktop
RUN chmod +x /usr/share/applications/neural.desktop

## profile.d environment vars
#These were required for dit4c; what happens in this case with / without this?
#COPY etc /etc
