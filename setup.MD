```
git clone https://github.com/brainboxdotcc/templatebot .
git clone https://github.com/fmtlib/fmt
cd fmt
mkdir build
cd build
cmake ..
sudo make install
cd ../../..
git clone https://github.com/nlohmann/json
cd json
mkdir build
cd build
cmake ..
sudo make install
cd ../../..
git clone https://github.com/brainboxdotcc/dpp
cd dpp
mkdir build
cd build
cmake ..
make -j
sudo make install
cd ../../..
mkdir build
cd build
cmake ..
make -j
```
for Gitpod
```
cd fmt/build && sudo make install && cd ../.. && cd json/build && sudo make install && cd ../.. && cd DPP/build && sudo make install && cd ../.. && cd build
```