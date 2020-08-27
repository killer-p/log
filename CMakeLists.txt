cmake_minimum_required (VERSION 3.1)
project (log)
aux_source_directory(. dir_src)
add_executable(main ${dir_src})
