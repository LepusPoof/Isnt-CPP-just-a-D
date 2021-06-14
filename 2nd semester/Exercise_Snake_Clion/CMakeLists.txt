cmake_minimum_required(VERSION 3.19)
project(Exercise_Snake_Clion)

set(CMAKE_CXX_STANDARD 14)

add_executable(Exercise_Snake_Clion main.cpp)

include_directories(headers c:/SFML/include)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics)
if (SFML_FOUND)
    include_directories(${SMFL_INCLUDE_DIR})
    target_link_libraries(Exercise_Snake_Clion ${SFML_LIBRARIES})
endif()

file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})

#COPY DLL'S TO BUILD DIRECTORY
if(WIND32)
    file(GLOB BINARY_DEP_DLLS "${SFML_INCLUDE_DIR}/../bin/*.dll")
    file(COPY ${BINARY_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
endif()
