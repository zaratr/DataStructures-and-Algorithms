//
// Created by zarat on 2/21/2023.
//

#include "InsertionShiftArray.h"
#include <vector>

InsertionShiftArray :: InsertionShiftArray(int arr[], int target, int size): array(arr), len(size), target(target){}

int* InsertionShiftArray :: insertionShiftArray(){
    if(array == nullptr) return nullptr;
    this->insertedArr = new int[len + 1];
    int middleIndex = len/2, element = 0;
    for(int i = 0; i < len + 1; ++i){
        if(i == middleIndex){
            element = i;
            this->insertedArr[middleIndex] = target;
            ++i;
        }
        this->insertedArr[i] = array[element];
        ++element;
    }
    return insertedArr;
}

int* InsertionShiftArray ::getActual() {
    return this->insertedArr;
}

InsertionShiftArray :: ~InsertionShiftArray(){
    freeDynamicArray(this->insertedArr);
    //freeDynamicArray(this->array);
}

void InsertionShiftArray :: freeDynamicArray(int *& arr){
    if(!arr) return;

    delete[] arr;
    arr = nullptr;
}