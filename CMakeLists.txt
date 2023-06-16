cmake_minimum_required(VERSION 3.20)
project(c_plan_5025)

set(CMAKE_CXX_STANDARD 14)

add_executable(c_plan_5025
        main_src/v1_base_syntax/a_Hello_world.cpp
        )

if(WIN32)
    # set console codepage to UTF-8 in Windows
    # set project encoding to UTF-8
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")
endif()

# 遍历项目根目录下所有的 .cpp 文件
file (GLOB_RECURSE files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()