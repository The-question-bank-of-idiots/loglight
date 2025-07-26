project(loglight_example)

set(example_src_list example_main.cpp)

add_executable(${PROJECT_NAME} ${example_src_list})

# 链接库
target_link_libraries(${PROJECT_NAME} loglight)