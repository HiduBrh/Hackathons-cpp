cmake_minimum_required(VERSION 3.6)
project(Hackathons)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Equipe.cpp Equipe.h Note.cpp Note.h Etape.cpp Etape.h)
add_executable(Hackathons ${SOURCE_FILES})