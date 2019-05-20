#!/bin/bash
rm -rf build
mkdir -p build
pushd build
cmake ..
make -j 8
cp ./CppUnique ..

rm -rf build
