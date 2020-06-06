FROM jupyter/minimal-notebook:76402a27fd13

USER root

#Required to add repo
RUN apt-get update && apt-get install -y software-properties-common


RUN dpkg --add-architecture i386

ENV WINEDLLOVERRIDES="mscoree,mshtml="

RUN wget -nc https://dl.winehq.org/wine-builds/winehq.key
RUN apt-key add winehq.key
RUN apt-add-repository 'deb https://dl.winehq.org/wine-builds/ubuntu/ xenial main'
RUN apt update && apt-get install -y --install-recommends winehq-stable \
    && apt-get clean

# Maybe better - for the apt.packages:
COPY apt.txt apt.txt 
RUN xargs apt-get install -y < apt.txt \
    && apt-get clean

USER ${NB_USER}

COPY Desktop/ Desktop/
COPY Apps/ Apps/
RUN pip install websockify && pip install git+https://github.com/yuvipanda/jupyter-desktop-server.git

USER root
RUN chmod +x Desktop/robotlab.sh
RUN chmod +x Desktop/neural.sh

USER ${NB_USER}

RUN pip install jupyterlab_iframe
RUN jupyter labextension install jupyterlab_iframe
RUN jupyter serverextension enable --py jupyterlab_iframe
