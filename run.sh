set -e

export CC=clang
export CXX=clang++

cmake -Bbuild -GNinja
cmake --build build
./bin/tour