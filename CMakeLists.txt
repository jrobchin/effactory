cmake_minimum_required(VERSION 3.0)
project(redakt)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

# Include OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# Include directories to find headers
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add redakt library
add_library(
    redakt
    SHARED
    src/display/videoplayer.cpp
    )
target_link_libraries(redakt ${OpenCV_LIBS}) # link opencv to 
install(TARGETS redakt DESTINATION lib)

# Add examples directory
add_subdirectory(examples)