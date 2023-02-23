//
// Created by zarat on 2/21/2023.
//

#ifndef C___INSERTIONSHIFTARRAY_H
#define C___INSERTIONSHIFTARRAY_H
#include <vector>

class InsertionShiftArray {
public:
    InsertionShiftArray(int[], int, int);
    ~InsertionShiftArray();
    int* insertionShiftArray();
    void freeDynamicArray(int*&);
    int* getActual();
private:
    int len;
    int target;
    int* array;
    int* insertedArr;
};


#endif //C___INSERTIONSHIFTARRAY_H
