#include <gtest/gtest.h>
#include <mymath/add.h>

TEST(mymath_test, test_add){
    EXPECT_EQ(1+2, Mymath::add(1,2));
    EXPECT_EQ(1+8, Mymath::add(1, 8));
}