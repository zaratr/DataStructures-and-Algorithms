//
// Created by zarat on 2/21/2023.
//

#ifndef C___INSERTIONSHIFTARRAY_H
#define C___INSERTIONSHIFTARRAY_H
#include <vector>

class InsertionShiftArray {
public:
    InsertionShiftArray(std::vector<int>, int);
    void insertionShiftArray();
private:
    int len;
    int target;
    std::vector<int> vec;
};


#endif //C___INSERTIONSHIFTARRAY_H
