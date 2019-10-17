#!/bin/bash
THISDIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

echo "Configuring envt for TM129 apps.."
if [ ! -f /opt/tm129apps.done ]; then
	#Add shortcut to run apps on desktop
	cp -r $THISDIR/home/vagrant/Desktop/. /home/vagrant/Desktop/
	chown -R vagrant /home/vagrant
	
	chmod +x /home/vagrant/Desktop/*.desktop 

	touch /opt/tm129apps.done
fi
echo "...TM129 app configuration done.."
