#!python

from os import system

system("bazel test --cxxopt=-std=c++14 --test_output=all //:hello_test")
