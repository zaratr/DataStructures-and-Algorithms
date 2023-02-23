#include <gtest/gtest.h>
#include "inheritence_example/encapsulation.h"

using namespace std;
//create a test case named 'encapTest, and test named 'proofLife'

/**
 * test to check if virtual is working correctly.
 * upcasting using dynamic_cast and with if statements wasn't allowing usage of some
 * methods only implemented in parent or only in child.
 * by using virtual keyword, I only need to use parent object. this typ of abstraction is alot better then casting with dynamic
 */
TEST(testParent, proofLife){
    Encapsulation* encapsulation1 = new Child1(1);
    Encapsulation* encapsulation2 = new Child2(1);
    ASSERT_EQ(encapsulation1->getValue(), 1);
    ASSERT_EQ(encapsulation2->getValue(), 1);
    delete encapsulation1;
    delete encapsulation2;
}

TEST(testChild1, testParentToChild1){
    Encapsulation* encapsulation = new Child1(20, "pepe");
    ASSERT_EQ(encapsulation->getValue(), 20);
    ASSERT_EQ(encapsulation->getName(), "pepe");
    delete encapsulation;
}

TEST(testChild2, testParenttoChild2){
    const double tolerance = 0.0001;
    Encapsulation* encapsulation = new Child2(20, 1.12);
    double actual = encapsulation->getId();
    ASSERT_NEAR(1.12, actual, tolerance);
    delete encapsulation;
}
