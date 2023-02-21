#include <gtest/gtest.h>
#include "Arrays/ArrayShift/ArrayShift.h"
#include "Arrays/BinarySearch/BinarySearch.h"
#include <vector>
#include <algorithm>
using namespace std;

//create a test case named 'caseOne, and test named 'proofLife'
TEST(arrayShift_addTen, arrayShiftTestNull){
    ArrayShift sut;
    int test[] = {1,2,3,4,5};
    const int len = sizeof (test)/sizeof (test[0]);
    int returnedArr[len+1];
    vector<int> expected = {1,2,10,3,4,5};

    sut.insertShiftArray(test, returnedArr, len, 10);
    vector<int> actual(returnedArr, returnedArr + len+1);

    ASSERT_TRUE(actual == expected);
    //ASSERT_TRUE(equal(actual.begin(), actual.end(), expected.begin()));
}


TEST(binarySearchFindTwo, binarySearchFindTwoTest){
    BinarySearch sut;
    int test[]{1,2,3,4,5,6,7,8,9,10,11};
    const int len = sizeof (test)/sizeof (test[0]);
    int actual = sut.binarySearch(test, 2, len);
    const int expected = 1;
    ASSERT_EQ(expected, actual);
}
