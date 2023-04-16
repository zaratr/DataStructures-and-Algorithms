#include "MergeSort.h"
#include <vector>
using namespace std;

MergeSort :: MergeSort(vector<int> arr, int size) : arr(arr), size(size){
}

vector<int> MergeSort :: getActual(){
	return arr;
}

vector<int> MergeSort :: mergeSort(){
    vector<int>* ptrArr = &arr;
    if(ptrArr == nullptr) return arr;
    mergeSort(arr);
    return arr;
}

vector<int> MergeSort :: mergeSort(vector<int> arr){
    if(arr.size() < 2) return arr;
    int middle = arr.size()/2;
    vector<int> tmpLeft;
    vector<int> tmpRight;
    tmpLeft.assign(arr.begin(), arr.begin() + middle);
    tmpRight.assign(arr.begin() + middle + 1, arr.end());
    vector<int> left = mergeSort(tmpLeft);
    vector<int> right = mergeSort(tmpRight);
    return merge(left, right, arr);
}

vector<int> MergeSort :: merge(vector<int> start, vector<int> end, vector<int> arr){
	return arr;
}
