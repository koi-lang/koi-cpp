cmake_minimum_required(VERSION 3.12)
project(koicore)

set(CMAKE_CXX_STANDARD 17)

add_library(koicore src/main/cpp/koi_object.cpp src/main/cpp/koi_object.hpp src/main/cpp/main.cpp src/main/cpp/types/koi_boolean.cpp src/main/cpp/types/koi_boolean.hpp src/main/cpp/koicore.hpp src/main/cpp/types/types.hpp)