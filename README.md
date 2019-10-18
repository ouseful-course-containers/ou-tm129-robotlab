# ou-tm129-robotlab

Build on a Linux desktop under `vagrant`.

### Run from VagrantCLoud

Install `Virtualbox` and `vagrant`.
Download the `Vagrantfile.user` file and save it as `Vagrantfile`.
In the same directory, run: `vagrant up` -  it should launch Virtualbox with a desktop GUI from which you can run `RobotLab` and `Neural`.

If you need credentials, there is a *sudoers* account with username `vagrant` and password `vagrant`.


### Build, Package and Publish Process

The following commands can be used to build the VM, package it, and publish it to VagrantCloud:

```
cp Vagrantfile.build Vagrantfile
vagrant destroy
vagrant up

vagrant package --output tm129robotlab.box

vagrant cloud auth login
vagrant cloud publish ouseful/robotlab_test 0.0.2 virtualbox tm129robotlab.box -d "Linux desktop running TM129 RobotLab and Neural apps under wine" --version-description "Second attempt; apps via desktop shortcuts" --release --short-description "TM129 RobotLab/Neural under wine on Linux desktop"

```
