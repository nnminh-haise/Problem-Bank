#!/usr/bin/env python3

import os
import sys


CPP_VERSION = 17
COMPILE_CPP_COMMAND = "c++ --std=c++17 -o "
RUN_CPP_COMMAND = "./"


def get_current_path():
    return os.getcwd()


def terminal(command):
    os.system(command)


def file_exist(file_name):
    path = get_current_path() + "/" + file_name + ".cpp"
    return os.path.exists(path)


inputs = list(sys.argv)

file_name = inputs[1]

if file_exist(file_name):
    print("Using C++17")
    terminal(COMPILE_CPP_COMMAND + file_name + " " + file_name + ".cpp")
    terminal(RUN_CPP_COMMAND + file_name)
    print(file_name, "is compiled!")
else:
    print("File", file_name, "does not exist!")
