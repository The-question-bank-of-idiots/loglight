# 设置最低版本要求
cmake_minimum_required(VERSION 3.30)
project(loglight LANGUAGES CXX VERSION 1.0.0)

add_subdirectory(src)

# 启用 example 构建（可通过 -DBUILD_EXAMPLE=OFF 关闭）
option(BUILD_EXAMPLE "Build example" ON)
if (BUILD_EXAMPLE)
    add_subdirectory(example)
endif ()