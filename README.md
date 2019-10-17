# ou-tm129-robotlab

Build on a Linux desktop under `vagrant`.



### Build, Package and Publish Process

The following commands can be used to build the VM, package it, and publish it to VagrantCloud:

```
cp Vagrantfile.build Vagrantfile
vagrant destroy
vagrant up

vagrant package --output tm129robotlab.box

vagrant cloud auth login
vagrant cloud publish ouseful/robotlab_test 0.0.1 virtualbox tm129robotlab.box -d "Linux desktop running TM129 RobotLab and Neural apps under wine" --version-description "First attempt; apps in /opt/apps" --release --short-description "TM129 RobotLab/Neural under wine on Linux desktop"

```
