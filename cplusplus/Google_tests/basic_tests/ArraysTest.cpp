#include <gtest/gtest.h>
#include "ArrayShift/ArrayShift.h"
#include <vector>
#include <algorithm>
using namespace std;

//create a test case named 'caseOne, and test named 'proofLife'
TEST(caseOne, arrayShiftTestNull){
    ArrayShift sut;
    int test[] = {1,2,3,4,5};
    int len = sizeof (test)/sizeof (test[0]);
    int returnedArr[len+1];
    vector<int> expected = {1,2,10,3,4,5};

    sut.insertShiftArray(test, returnedArr, len, 10);
    vector<int> actual(returnedArr, returnedArr + len+1);

    ASSERT_TRUE(actual == expected);
    //ASSERT_TRUE(equal(actual.begin(), actual.end(), expected.begin()));
}