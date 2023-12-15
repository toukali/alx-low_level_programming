#!/bin/bash
wget -P https://github.com/toukali/alx/raw/main/0x18-Dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
