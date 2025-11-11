# minesweeper
Minesweeper game remake using Raylib

# Build on Linux
## Install dependencies
Complete Raylib build guide - https://github.com/raysan5/raylib/wiki/Working-on-GNU-Linux
1. Install Raylib dependencies:
```
sudo apt install libasound2-dev libx11-dev libxrandr-dev libxi-dev libgl1-mesa-dev libglu1-mesa-dev libxcursor-dev libxinerama-dev libwayland-dev libxkbcommon-dev
```
2. Clone the Raylib repository and check out the 5.5 release tag:
```
git clone https://github.com/raysan5/raylib.git
cd raylib
git checkout 5.5
```
3. Build Raylib statically (this project is built with CMake)::
```
cd raylib
mkdir build && cd build
cmake -DBUILD_SHARED_LIBS=OFF ..
make
sudo make install
sudo ldconfig
```
