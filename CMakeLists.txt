# CMakeLists.txt

cmake_minimum_required(VERSION 3.22)  # Updated to support CMake Presets
project(EigenExample)

# Find Eigen3 package
find_package(Eigen3 3.3 REQUIRED NO_MODULE)

# Create an executable from the source file
add_executable(main src/main.cpp)

# Link Eigen3 to the project
target_link_libraries(main PRIVATE Eigen3::Eigen)