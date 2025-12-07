cmake_minimum_required(VERSION 3.16)

project(H5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H5 main.cpp
    a1.h a1.cpp
    a2.h a2.cpp
    b.h b.cpp)

include(GNUInstallDirs)
install(TARGETS H5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
