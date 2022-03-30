cmake_minimum_required(VERSION 3.22)
project(untitled4 C)

set(CMAKE_C_STANDARD 99)

add_executable(EE205-Lab10b-typedef main.c addCats.c addCats.h catDatabase.c catDatabase.h config.h deleteCats.c deleteCats.h reportCats.c reportCats.h updateCats.c updateCats.h)
