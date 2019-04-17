Example of container that runs XPRA and that can run *RobotLab* or *Neural*.

By default, it will start onto *RobotLab*:

- `docker run --name tm129x --shm-size 1g -p 3395:10000 -d ousefuldemos/tm129robotics-xpra-html5`
- `docker run --name tm129x --shm-size 1g -p 3395:10000 -e start=robotlab -d ousefuldemos/tm129robotics-xpra-html5`
- `docker run --name tm129x --shm-size 1g -p 3395:10000 -e start=neural -d ousefuldemos/tm129robotics-xpra-html5`

Originally based on `lanrat/docker-xpra-html5`, updated via a fork at https://github.com/ouseful-backup/docker-xpra-html5 and Docker image `ousefuldemos/docker-xpra-html5`.
