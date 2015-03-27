# Docker image for static DASH ("the Debian Almquist Shell")
#
# @see http://gondor.apana.org.au/~herbert/dash/
# @see http://www.in-ulm.de/~mascheck/various/ash/
#

# pull base image
FROM scratch
MAINTAINER William Yeh <william.pjyeh@gmail.com>

ADD dash-rootfs.tar.gz /

CMD ["/bin/sh"]
