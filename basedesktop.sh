#!/usr/bin/env bash
THISDIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"


#Autologin
#https://askubuntu.com/a/51087
cp $THISDIR/etc/lightdm/lightdm.conf /etc/lightdm/lightdm.conf



#Desktop config settings to run at every boot
cp $THISDIR/scripts/set-gnome-settings.sh /opt/set-gnome-settings.sh 
chmod +x /opt/set-gnome-settings.sh 

#mkdir -p /home/vagrant/.config/autostart/
#cp -r $THISDIR/home/vagrant/.config/autostart/. /home/vagrant/.config/autostart/
#chmod +x /home/vagrant/.config/autostart/*.desktop
