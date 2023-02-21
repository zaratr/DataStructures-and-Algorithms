//
// Created by zarat on 2/4/2023.
//

#include "ArrayShift.h"

void ArrayShift ::insertShiftArray(int arr[], int out[], int len, int target) {
    int middle = len/2;
    len = len +1;//add an extra space
    int i = 0;
    int elementLocation = 0;
    for(i = 0; i < len; ++i){
        out[i] = arr[elementLocation];
        if(i == middle)
            out[i] = target;
        else
            ++elementLocation;
    }
    return;
}
