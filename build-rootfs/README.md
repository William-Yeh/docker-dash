Building rootfs for static DASH
===

## Build it on Linux

```bash
$ ./build.sh
```

## Build it on Vagrant

```bash
$ vagrant up
```

## Done!

If everything is ok, you'll obtain two files:

 - `dash-static`: a static DASH binary without any runtime dependency.
 - `dash-rootfs.tar.gz`: the rootfs tarball to be put into the Docker image.
