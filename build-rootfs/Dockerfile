# Dockerfile for building rootfs.tar.gz
#
# USAGE:
#   $ docker-compose up
#
# Version  1.0
#


# pull base image
FROM ubuntu:trusty

MAINTAINER William Yeh <william.pjyeh@gmail.com>


# install toolchain for building...
RUN DEBIAN_FRONTEND=noninteractive  \
    apt-get update  &&  \
    apt-get -f -y install git build-essential automake



WORKDIR /tmp
COPY    .  /tmp
RUN     ./build.sh


# copy generated rootfs tarball...
VOLUME [ "/data" ]
CMD ["cp", "dash-static", "dash-rootfs.tar.gz", "/data/"]
