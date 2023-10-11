# Acknowledgements

This is the baseline [WGMK16] repo: https://github.com/wangxiao1254/Secure-Computation-of-MIPS-Machine-Code.

Eprint link: https://eprint.iacr.org/2015/547

We made some small modifications for testing and fixing bugs.

# Set Up Environment

Update Debian apt source:

echo "deb http://archive.debian.org/debian/ stretch main contrib non-free" > sources.list &&

echo "deb http://archive.debian.org/debian/ stretch-proposed-updates main contrib non-free" >> sources.list &&

echo "deb http://archive.debian.org/debian-security stretch/updates main contrib non-free" >> sources.list &&

sudo cp sources.list /etc/apt/sources.list &&

sudo apt-get update

Build the compiling toolchain:

sudo bash build.sh

We test above methods already on a vanilla Debian 9 x86-64 machine.
