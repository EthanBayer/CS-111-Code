CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12)

INCLUDE_DIRECTORIES(googletest/include)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE( modexpo_tests 
    test/modexpo.cpp
    header/modularexpo.hpp
)

#TARGET_LINK_LIBRARIES(unit_tests gtest)
#TARGET_COMPILE_DEFINITIONS(unit_tests PRIVATE gtest_disable_pthreads=ON)