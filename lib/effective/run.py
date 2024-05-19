#!python3
import os
os.system("mkdir build")
os.system("clang++ -std=c++20 --pedantic -o build\\main.exe src\\*.cc && build\\main.exe")
