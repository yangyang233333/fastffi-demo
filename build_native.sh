cp target/generated-sources/annotations/*.cc native/

cd native
rm -rf build
cmake -B build -S .
cmake --build build

cp build/*.so ..