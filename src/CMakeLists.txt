project(loglight)

# 设置源文件列表
set(src_list
    queue/queue.cpp
    logger/console_logger.cpp
    logger_factory/logger_factory.cpp
)

# 创建共享库
add_library(${PROJECT_NAME} SHARED ${src_list})

# 设置C++20标准
set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)