# 设置源文件列表
set(src_list
    queue/queue.cpp
)

# 创建共享库
add_library(${CMAKE_PROJECT_NAME} SHARED ${src_list})

# 设置C++20标准
set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)
