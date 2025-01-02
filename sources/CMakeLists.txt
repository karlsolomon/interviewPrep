cmake_minimum_required(VERSION 3.30)
project(threadPool)
set(CMAKE_CXX_FLAGS "-std=c++23 -v")
set(DEBUG true)
# set(CMAKE_CXX_STANDARD 23) # TODO (ksolomon): change to C++17 for nvc++ compatibility
set(NV false)
if (NV)
    set(TOOLCHAIN_PATH "/opt/nvidia/hpc_sdk/Linux_x86_64/24.11/compilers/bin")
    set(COMPILER "nvc++")
else ()
    set(TOOLCHAIN_PATH "/home/ksolomon/git/llvm-project/build/bin")
    set(COMPILER "clang++")
    set(LINKER "lld")
endif ()
set(CMAKE_CXX_COMPILER "${TOOLCHAIN_PATH}/${COMPILER}")
set(CMAKE_CXX_LINKER "${TOOLCHAIN_PATH}/${LINKER}")
include_directories(inc)
add_executable(
    threadPool
    basicThreadPool.cpp
)
if (DEBUG)
    target_compile_options(
        threadPool
        PRIVATE -O0
                -g
                -Wall
                -Wextra
                -pedantic
                -fsanitize=thread
    )
else ()
    target_compile_options(threadPool PRIVATE -O3)
endif ()
target_link_libraries(threadPool PRIVATE tbb tsan)
