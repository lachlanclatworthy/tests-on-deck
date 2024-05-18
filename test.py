#!python3

from os import system

tests = [
        "hello_test",
]

# //:test_1 ....
def test_str(tests: list) -> str:
    out = ""
    for t in tests:
        out = out + "//:{} ".format(t)
    return out


system(f"bazel test --cxxopt=-std=c++14 --test_output=all {test_str(tests)}")
