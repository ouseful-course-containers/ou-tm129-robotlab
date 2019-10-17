#!/usr/bin/env bash

THISDIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

wget -nc https://dl.winehq.org/wine-builds/winehq.key
apt-key add winehq.key
apt-add-repository 'deb https://dl.winehq.org/wine-builds/ubuntu/ xenial main'
apt-get update && apt-get install -y --install-recommends winehq-stable && apt-get clean


#Canlt get this to work properly - will install manually on first run
#mkdir -p /home/vagrant/.cache/wine
#wget http://dl.winehq.org/wine/wine-mono/4.8.1/wine-mono-4.8.1.msi -O /home/vagrant/.cache/wine/wine-mono-4.8.1.msi
#wget http://dl.winehq.org/wine/wine-gecko/2.47/wine_gecko-2.47-x86.msi -O /home/vagrnt/.cache/wine/wine_gecko-2.47-x86.msi
#wget http://dl.winehq.org/wine/wine-gecko/2.47/wine_gecko-2.47-x86_64.msi -O /home/vagrant/.cache/wine/wine_gecko-2.47-x86_64.msi

#wine msiexec /qn /i /home/user/.cache/wine/wine_gecko-2.47-x86_64.msi
#wine msiexec /qn /i /home/user/.cache/wine/wine_gecko-2.47-x86.msi
#wine msiexec /qn /i /home/user/.cache/wine/wine-mono-4.8.1.msi

cp -r $THISDIR/Apps/.  /opt/Apps

cp -r $THISDIR/usr/. /usr

chmod +x /usr/share/applications/robotlab.desktop
chmod +x /usr/share/applications/neural.desktop