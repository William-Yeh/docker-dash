Building rootfs for static DASH
===

## Build it

You may choose to build it with either Docker or Vagrant.

- Build it with Docker:

  ```bash
  $ docker-compose up
  ```

- Build it with Vagrant:

  ```bash
  $ vagrant up
  ```

## Done!

If everything is ok, you'll obtain two files:

 - `dash-static`: a static DASH binary without any runtime dependency.
 - `dash-rootfs.tar.gz`: the rootfs tarball to be put into the Docker image.
