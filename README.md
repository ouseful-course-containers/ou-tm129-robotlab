Example of container that runs XPRA and that can run *RobotLab* or *Neural*.

By default, it will start onto *RobotLab*:

- `docker run --name tm129x --shm-size 1g -p 3395:10000 -d ousefuldemos/tm129robotics-xpra-html5`
- `docker run --name tm129x --shm-size 1g -p 3395:10000 -e start=robotlab -d ousefuldemos/tm129robotics-xpra-html5`
- `docker run --name tm129x --shm-size 1g -p 3395:10000 -e start=neural -d ousefuldemos/tm129robotics-xpra-html5`

Originally based on `lanrat/docker-xpra-html5`, updated via a fork at https://github.com/ouseful-backup/docker-xpra-html5 and Docker image `ousefuldemos/docker-xpra-html5`.

---

The XPRA service runs and can be connected to, but trying to access the desktop via the notebook proxy/10001/ (trailing slash required for style) 
throws up the XPRA HTML client with an error.

For example, with notebook on 8877 and xpra on 10000, trying http://localhost:8877/proxy/10000/ gives:

```
You were disconnected for the following reason:

Did not receive hello before timeout reached, not an Xpra server?
```

and hands off to: http://localhost:8877/proxy/10000/connect.html

So the jupyter proxy is getting in the way somewhere?

Open directly onto `robotlab` and `neural` apps, although `neural` raises (screen?) memory issues?

`docker run -p 8877:8888 -p 10005:10000 -p 10006:10001 -d --name testxpraj  xpra-j`
