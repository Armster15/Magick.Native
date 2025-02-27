#!/bin/bash
set -e

apt-get update -y

apt-get install -y autoconf autopoint binutils gcc g++ gettext git gperf libtool nasm pkg-config python python-pip python3-pip ragel texinfo

pip3 install --upgrade pip
pip3 install cmake
pip3 install meson==0.55.3
pip3 install ninja==1.10.0.post2
