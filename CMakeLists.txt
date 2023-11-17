cmake_minimum_required(VERSION 3.23)
project(M3OEP_sdwill_elembach)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(M3OEP_sdwill_elembach
        OE_Engine.py
        style.css
        password_validation.cpp
        password_strength.cpp)
