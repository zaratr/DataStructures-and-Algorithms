package datastructures.array.binarysearch;

/**
 * Binary Search divides and finds target number. Method 1 iterates through an array and uses three place holders for the index.
 * middle holds the location of element that equals the target.
 * <pre>
 * Method 1
 * Time Complexity : O(lg N)
 * Space Complexity : O(1)
 * </pre>
 */
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
