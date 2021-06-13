cmake_minimum_required(VERSION 3.19)
project(Exercise_ASCII_Image)

set(CMAKE_CXX_STANDARD 14)

add_executable(Exercise_ASCII_Image main.cpp)
link_directories("c:/SFML")
include_directories(headers /usr/include c:/SFML/include)
find_package(SFML 2 COMPONENTS system window graphics network audio)


set(CMAKE_MODULE_PATH  "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")

if(WIN32)
    file(GLOB BINARY_DEP_DLLS "${SFMl-INCLUDE_DIR}/../bin/*.dll")
    file(COPY ${BINARY_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
endif()

target_link_libraries(Exercise_ASCII_Image sfml-graphics sfml-audio sfml-system sfml-window sfml-network)


#CMAKE_PREFIX_PATH


## If you want to link SFML statically
# set(SFML_STATIC_LIBRARIES TRUE)

## In most cases better set in the CMake cache
# set(SFML_DIR "<sfml root prefix>/lib/cmake/SFML")

#find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
#add_executable(SFMLTest main.cpp)
#target_link_libraries(SFMLTest sfml-graphics sfml-audio)

#find_package(SFML 2 COMPONENTS system window graphics network audio)
