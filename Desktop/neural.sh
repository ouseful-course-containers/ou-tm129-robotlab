#! /usr/bin/env bash
 
#Start the Neural app
wine /home/jovyan/Apps/Neural/neural.exe
 
#Keep the container running...
tail -f /dev/null
