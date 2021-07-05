//
// Created by tao.yang on 2021/7/5.
//

#include <gtest/gtest.h>
#include "src/util/operate.h"

TEST(utilTestCase, testTwoSum){
    operate op;
    EXPECT_EQ(op.twoSum(2,3),5);
}
