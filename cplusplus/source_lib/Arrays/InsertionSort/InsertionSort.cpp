//
// Created by zarat on 2/21/2023.
//

#include "InsertionSort.h"

InsertionSort ::InsertionSort(int arr[], int len): arr(arr), lengthArray(len) {}
int* InsertionSort :: insertionSort(){
    if(arr != nullptr || !(lengthArray < 2)){
        int N = lengthArray;
        int key;
        int space;
        for(int i = 1; i < N; ++i){
            key = arr[i];
            space = i;
            for(int j = space -1; j >= 0; j--){
                if(arr[j] > key){
                    arr[j + 1] = arr[j];
                    space = j;
                    continue;
                }
                break;
            }
            arr[space] = key;
        }
    }
    return arr;
}