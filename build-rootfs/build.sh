#!/bin/bash
#
# Build a minimal static DASH binary, without its GPLv2 part.
#
# @see http://gondor.apana.org.au/~herbert/dash/
# @see http://man7.org/linux/man-pages/man7/signal.7.html
#

#set -e
#set -x

rm -rf dash temp


echo "=== Fetching dash source..."
git clone git://git.kernel.org/pub/scm/utils/dash/dash.git
cd dash


echo "=== Fixing signames.c mechanism..."
cp  ../new-signames.c  src/signames.c
rm  src/mksignames.c
sed -i -e 's/mksignames.c//'  src/Makefile.am
sed -i -e 's/mksignames//'    src/Makefile.am
 

echo "=== Building dash..."
./autogen.sh
./configure --enable-static
make


echo
echo "=== Checking dash binary..."

ldd src/dash
cp src/dash  ../dash-static


echo
echo "=== Building rootfs.tar.gz ..." 

mkdir -p temp temp/bin
cp ../LICENSE-OF-THIS-PATCHED-DASH    temp/

cp src/dash   temp/bin
cd temp/bin
ln -s dash sh
ln -s dash bash
cd ..
tar zcvf ../../dash-rootfs.tar.gz *


echo
echo "=== Done!"
