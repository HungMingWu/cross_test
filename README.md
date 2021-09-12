1. sudo apt install gcc-powerpc-linux-gnu g++-powerpc-linux-gnu qemu-user-binfmt
2. export QEMU_LD_PREFIX=/usr/powerpc-linux-gnu
3. mkdir build && cd build && CXX=powerpc-linux-gnu-g++ cmake .. && make
4. ./CrossTest

### Reference
[Test cross-architecture without leaving home](https://nullprogram.com/blog/2021/08/21/)
