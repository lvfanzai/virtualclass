#!/bin/bash
mkdir -p build
pushd build
cmake ..
make -j 8
cp ./main_process ..

rm -rf build
