# ou-tm129-robotlab
VNC container running OU RobotLab under wine.

About: [
DIT4C Inspired RobotLab Container](https://blog.ouseful.info/2018/04/27/dit4c-inspired-robotlab-container/)

To use this image:

- download and install Docker;
- start the applciation: `docker run --rm -d -p 8085:8080 --name robotlab ousefulcoursecontainers/ou-tm129-robotlab`
- in your browser, go to: `http://localhost:8085`
- stop the application: `docker stop robotlab`
- start the application: `docker start robotlab`
- restart a running application: `docker restart robotlab`
- kill the container: `docker kill robotlab`
- remove the container: `docker rm robotlab`
- delete the image: `docker rmi ousefulcoursecontainers/ou-tm129-robotlab`

