#include <gtest/gtest.h>
#include "inheritence_example/encapsulation.h"

//create a test case named 'encapTest, and test named 'proofLife'
TEST(encapTest, proofLife){
    Encapsulation encapsulation;
    encapsulation.setData(1);
    ASSERT_EQ(encapsulation.getData(), 1);
}