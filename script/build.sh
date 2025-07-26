#!/bin/bash

set -e

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
