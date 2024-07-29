# CMakeList.txt: pa0_1 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#

# 将源代码添加到此项目的可执行文件。
add_executable (pa0_1 "pa0_1.cpp" "pa0_1.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET pa0_1 PROPERTY CXX_STANDARD 20)
endif()


# cmake最低版本号要求
cmake_minimum_required(VERSION 3.14)

# 项目名称
project(eigen_demo)

# 设置Eigen3的头文件目录
set(EIGEN3_INCLUDE_DIR "D:/OfficeWork/dependency/eigen/eigen-3.3.8")

# 包含Eigen3的头文件目录
include_directories(${EIGEN3_INCLUDE_DIR})




