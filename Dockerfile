FROM dit4c/dit4c-container-x11:debian

RUN apt-get update && apt-get install -y software-properties-common 

# Install steps for X app
RUN dpkg --add-architecture i386
#RUN apt-add-repository 'https://dl.winehq.org/wine-builds/ubuntu/'
RUN echo "deb http://httpredir.debian.org/debian jessie-backports main" | sudo tee /etc/apt/sources.list.d/docker.list

#RUN wget https://dl.winehq.org/wine-builds/Release.key && sudo apt-key add Release.key
RUN apt-get update && apt-get install -y -t jessie-backports wine


COPY var /var

COPY Apps/ /opt/Apps

COPY etc /etc

COPY usr /usr
RUN chmod +x /usr/share/applications/robotlab.desktop
RUN chmod +x /usr/share/applications/neural.desktop
RUN chmod +x /usr/share/applications/remote.desktop

RUN LNUM=$(sed -n '/launcher_item_app/=' /etc/tint2/panel.tint2rc | head -1) && \
  sed -i "${LNUM}ilauncher_item_app = /usr/share/applications/robotlab.desktop" /etc/tint2/panel.tint2rc && \
sed -i "${LNUM}ilauncher_item_app = /usr/share/applications/neural.desktop" /etc/tint2/panel.tint2rc && \
sed -i "${LNUM}ilauncher_item_app = /usr/share/applications/remote.desktop" /etc/tint2/panel.tint2rc 


