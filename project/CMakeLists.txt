cmake_minimum_required(VERSION 3.16)

project(MyProject LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Statik kütüphane olsun
set(BUILD_SHARED_LIBS OFF)

# Alt klasörler
add_subdirectory(application)
add_subdirectory(middleware)
add_subdirectory(driver)
add_subdirectory(interfaces)

# # interfaces
# add_library(interfaces INTERFACE)
# target_include_directories(interfaces INTERFACE ${CMAKE_SOURCE_DIR}/interfaces)

