cmake_minimum_required(VERSION 3.6)
project(Hackathons_cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Application.cpp
        Application.h
        Equipe.cpp
        Equipe.h
        Etape.cpp
        Etape.h
        Hackathon.cpp
        Hackathon.h
        main.cpp
        Note.cpp
        Note.h
        Utilisateur.cpp
        Utilisateur.h)

add_executable(Hackathons_cpp ${SOURCE_FILES})