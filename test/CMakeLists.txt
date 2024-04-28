if(BUILD_TEST)
    find_package(GTest CONFIG REQUIRED)
    add_executable(mymath_test test.cc)
    target_link_libraries(mymath_test PUBLIC myadd PUBLIC GTest::gtest_main)
    add_custom_target(run_test ALL
        mymath_test
    )
endif()