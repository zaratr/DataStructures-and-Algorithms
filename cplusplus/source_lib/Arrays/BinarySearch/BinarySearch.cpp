
#include "BinarySearch.h"

int BinarySearch ::binarySearch(int arr[], int target, int len) {
    int start = 0, mid = 0, end = len;
    for(int i = end - start; i > 0; ++i){
        mid = (start + end ) / 2;
        if(arr[mid] == target) return mid;
        if(target > arr[mid]) start = mid + 1;
        else end = mid;
    }
    return -1;
}
