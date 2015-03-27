#!/bin/bash
#
# Build a minimal static dash binary.
#
# @see http://gondor.apana.org.au/~herbert/dash/
#

#set -e
#set -x

rm -rf dash temp


echo "=== Fetching dash source..."
git clone git://git.kernel.org/pub/scm/utils/dash/dash.git
cd dash


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
cp src/dash   temp/bin
cp COPYING    temp/LICENSE-OF-DASH

cd temp/bin
ln -s dash sh
ln -s dash bash
cd ..
tar zcvf ../../dash-rootfs.tar.gz *


echo
echo "=== Done!"
