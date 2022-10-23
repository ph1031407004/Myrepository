cmake_minimum_required(VERSION 2.8)

#opencv 4.+需要c++11以上版本的编译器
set(CMAKE_CXX_FLAGS "-std=c++11")

# 引入Opencv包
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# 注意use_opencv.cpp是我源代码文件名，你需要改成你源代码名
add_executable(renamePic renamePic.cpp)
# 链接OpenCV库
target_link_libraries(renamePic ${OpenCV_LIBS})