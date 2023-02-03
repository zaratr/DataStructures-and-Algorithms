#include <gtest/gtest.h>
#include "../cpp/encapsulation.h"

//create a test case named 'encapTest, and test named 'proofLife'
TEST(encapTest, proofLife){
    Encapsulation encapsulation;
    ASSERT_EQ(encapsulation.getNum(), 0);
}