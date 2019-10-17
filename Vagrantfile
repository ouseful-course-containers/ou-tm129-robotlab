#Vagrantfile for installing VM from vagrantcloud

Vagrant.configure("2") do |config|
	

    #------------------------- PROVIDER: VIRTUALBOX (USER) ------------------------------

    config.vm.provider :virtualbox do |virtualbox|
    

        #config.vm.box = "bento/ubuntu-16.04"	
        #config.vm.box = "ouseful/robotlab_test"
        
        #Stick with the default key
        config.ssh.insert_key=false
        
        #For local testing:
        config.vm.box = "robotlab_test2"
        config.vm.box_url = "./tm129robotlab.box"
        
        config.vm.hostname = "tm129robotlab-test"

        virtualbox.name = "tm129robotlab-test"
        
        #We need the memory to install scipy and build indexes on seeded mongodb
        #After the build it can be reduced back down to 1024
        virtualbox.memory = 1024
        #virtualbox.cpus = 1 
        virtualbox.gui = true

        config.vm.synced_folder ".", "/vagrant", disabled: true
        config.vm.synced_folder ".", "/home/vagrant/Desktop/share", owner: "vagrant"
        

        #Audio
        #https://github.com/GeoffreyPlitt/vagrant-audio/blob/master/Vagrantfile
        if RUBY_PLATFORM =~ /darwin/
            virtualbox.customize ["modifyvm", :id, '--audio', 'coreaudio', '--audiocontroller', 'ac97'] # choices: hda sb16 ac97
        elsif RUBY_PLATFORM =~ /mingw|mswin|bccwin|cygwin|emx/
            virtualbox.customize ["modifyvm", :id, '--audio', 'dsound', '--audiocontroller', 'ac97']
        end
        
        #Copy and paste
        virtualbox.customize ["modifyvm", :id, "--clipboard", "bidirectional"]
        
        #---- START PORT FORWARDING ----
        #Just in case we want to expose the simulator port(s)?
        #config.vm.network :forwarded_port, guest: 8888, host: 12980, auto_correct: true


        #---- END PORT FORWARDING ----
            
    end
    
#------------------------- END PROVIDER: VIRTUALBOX (USER) ------------------------------
  
end