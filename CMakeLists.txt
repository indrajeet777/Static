cmake_minimum_required(VERSION 3.10) 

 project(StaticLibraryExample)

 set(CMAKE_CXX_STANDARD 11)

 set(CMAKE_CXX_STANDARD 14)

 add_library(Calculator STATIC src/Calculator.cpp)

 target_include_directories(Calculator PUBLIC include)

# Add executable target
add_executable(Main src/Main.cpp)
target_link_libraries(Main PRIVATE Calculator)