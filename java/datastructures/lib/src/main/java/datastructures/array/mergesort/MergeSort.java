package datastructures.array.mergesort;

import java.util.Arrays;

public class MergeSort {
  private int[] arr;
  public MergeSort(int[] arr) {
    this.arr = arr;
  }
  public int[] mergeSort()
  {
    if(arr == null) return arr;
    mergeSort(arr);
    return arr;
  }

  private int[] mergeSort(int[] arr)
  {
    if(arr.length < 2) return arr;

    int middle = arr.length/2;
    int[] left = mergeSort(Arrays.copyOfRange(arr, 0, middle));
    int[] right = mergeSort(Arrays.copyOfRange(arr, middle, arr.length));
    return merge(left, right, arr);
  }
  private int[] merge(int[] left, int[] right, int[] arr)
  {
    int i = 0, j = 0, k = 0;
    while(i < left.length && j < right.length)
    {
      if(left[i] <= right[j])
      {
        arr[k] = left[i];
        ++i;
      }
      else {
        arr[k] = right[j];
        ++j;
      }
      ++k;
    }
    if(i == left.length) {
      while (j < right.length) {
        arr[k] = right[j];
        ++k;
        ++j;
      }
    }
    else //(i == right.length) {
    {
      while (i < left.length) {
        arr[k] = left[i];
        ++k;
        ++i;
      }
    }
    return arr;
  }
}
