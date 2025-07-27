# 设置最低版本要求
cmake_minimum_required(VERSION 3.18)
project(loglight_pro LANGUAGES CXX VERSION 1.0.0)

# 设置编译模式
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/libs)

# third party
add_subdirectory(third_party)

# 源代码
add_subdirectory(src)

# 启用 example 构建（可通过 -DBUILD_EXAMPLE=OFF 关闭）
option(BUILD_EXAMPLE "Build example" ON)
if (BUILD_EXAMPLE)
    add_subdirectory(example)
endif ()