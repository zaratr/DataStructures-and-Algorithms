package datastructures.array.binarysearch;

public class BinarySearch {
  public int binarySearch(int[] arr, int target){
    int start = 0,end =arr.length,mid = 0;

    for(int i = end - start; i > 0; ++i) {
      mid = (start + end) / 2;
      if (arr[mid] == target) return mid;
      if (target > arr[mid]) start = mid + 1;
      else end = mid;
    }
    return -1;
  }
}
