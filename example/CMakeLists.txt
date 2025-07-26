set(example_src_list example_main.cpp)

add_executable(loglight_example ${example_src_list})

link_libraries(loglight_example loglight)
