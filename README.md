Docker image for static DASH 
============

Repository name in Docker Hub: **[williamyeh/dash](https://registry.hub.docker.com/u/williamyeh/dash/)**

This Docker image contains only a static version of [DASH](http://gondor.apana.org.au/~herbert/dash/) (“the Debian Almquist Shell”).


## Purpose

To build a minimal Docker image, you may begin with `scratch`, and then add something (usually *static binary files* without any runtime dependency) into it.

Sometimes we'd also like to put *simple wrapper scripts* into the image, too.  Most people will begin with base images such as [`busybox`](https://registry.hub.docker.com/_/busybox/), [`progrium/busybox`](https://registry.hub.docker.com/u/progrium/busybox/), or [`alpine`](https://registry.hub.docker.com/_/alpine/).  However, even the BusyBox itself can be slimed down further, since the only thing needed here is a sh-compatible shell to interpret and execute our `*.sh` files.

For this case, I build a minimal Docker base image that contains only a statically linked program: [DASH](http://gondor.apana.org.au/~herbert/dash/) (“the Debian Almquist Shell”). To be more friendly to derived work, I also replace the only GPLv2 part in DASH (the `mksignames.c` file) with an MIT-style data source: [“SIGNAL(7) in Linux Programmer’s Manual”](http://man7.org/linux/man-pages/man7/signal.7.html).


## Features

- Highly compatible with "sh" (Bourne Shell).

- Small (about 1.4 MB).

- Permissive free software license.


## Usage

Mostly used as a base image.  For example:


```dockerfile
# First, inherit from this image...
FROM williamyeh/dash

# Then, put your static binaries and scripts below...
COPY ...
ADD  ...

```


## About the rootfs

To build the rootfs on your own, see [instructions](build-rootfs/README.md) for more details.



## Dependencies

- `scratch`.


## History

- 1.1 - Replace the only GPLv2 part in DASH (`mksignames.c`) with an MIT-style data source.
- 1.0 - Initial release.


## Author

William Yeh, william.pjyeh@gmail.com


## License

This image contains three components; each has its own license statement, respectively.

1. The first part is [DASH](http://gondor.apana.org.au/~herbert/dash/).  This part, excluding the `mksignames.c` file (removed from this Docker image), is primarily licensed under **3-clause BSD**.  See the [license file of DASH](http://git.kernel.org/cgit/utils/dash/dash.git/tree/COPYING) for more details.

2. The second part, the `new-signames.c` file, is hand-crafted by me according to an **MIT**-style data source: [“SIGNAL(7) in Linux Programmer’s Manual”](http://man7.org/linux/man-pages/man7/signal.7.html).

3. The remain parts, written by me, is released to **public domain**.  See [LICENSE](LICENSE) file for details.
