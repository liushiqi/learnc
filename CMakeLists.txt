cmake_minimum_required(VERSION 3.12)
project(learnc)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

find_package(Boost 1.55.5 COMPONENTS unit_test_framework)
if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(testclib test/test.cpp ${SOURCE_FILES})
    target_link_libraries(testclib ${Boost_LIBRARIES})
    target_include_directories(testclib PUBLIC src)
endif ()