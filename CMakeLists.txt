cmake_minimum_required(VERSION 3.12)
project(learnc)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(LIB_FILES src/2-6.c src/2-7.c src/2-8.c src/2-10.c src/3-1.c src/3-2.c src/3-5.c src/4-1.c src/4-2.c src/4-3/getop.c src/4-3/getch.c src/4-3/stack.c src/4-12.c src/4-13.c src/5-3.c src/5-4.c src/5-4.h)

add_library(libraries ${LIB_FILES})
target_compile_options(libraries PUBLIC -Wall -Wextra)

set(TEST_FILES test/2-6.cpp test/2-7.cpp test/2-8.cpp test/test.cpp test/2-10.cpp test/3-1.cpp test/3-2.cpp test/3-5.cpp test/4-1.cpp test/4-2.cpp test/4-12.cpp test/4-13.cpp test/5-3.cpp test/5-4.cpp)

find_package(Boost 1.55.5 COMPONENTS unit_test_framework)
if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(testclib ${TEST_FILES})
    target_link_libraries(testclib PUBLIC ${Boost_LIBRARIES} libraries)
    target_include_directories(testclib PUBLIC src)
    target_compile_options(testclib PUBLIC -Wall -Wextra)
endif ()

add_executable(4-3 src/4-3/main.c)
target_link_libraries(4-3 libraries)
