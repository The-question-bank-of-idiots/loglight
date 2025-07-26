#!/bin/bash

set -e

git submodule init
git submodule update

echo "Creating build directory..."
if [ -d "build" ]; then
    rm -rf build
fi
mkdir build

echo "Compiling project..."
pushd build >> /dev/null
cmake .. &&
make -j128
popd >> /dev/null

echo -e "\033[32mBuild completed successfully\033[0m"

echo "Running example..."
pushd build >> /dev/null
./example/loglight_example
popd >> /dev/null
