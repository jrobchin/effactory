include_directories(${PROJECT_SOURCE_DIR}/include)
link_directories(${PROJECT_SOURCE_DIR}/build)

SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")

find_package(OpenCV REQUIRED)

# Build examples
add_executable(
    playvideo.out
    playvideo.cpp
)
target_link_libraries(playvideo.out ${OpenCV_DIRS})
target_link_libraries(playvideo.out redakt)
install(TARGETS playvideo.out DESTINATION ${PROJECT_SOURCE_DIR}/examples)