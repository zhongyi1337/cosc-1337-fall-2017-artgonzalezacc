include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


add_executable(runTests simple_test.cpp)

target_link_libraries(runTests gtest gtest_main)
