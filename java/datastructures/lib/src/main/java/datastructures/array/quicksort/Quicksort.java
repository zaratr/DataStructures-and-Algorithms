package datastructures.array.quicksort;

public class Quicksort {
  public void quickSort(int[] arr, int left, int right){
    if(left < right){
      int position = partition(arr, left, right);
      quickSort(arr, left, position - 1);
      quickSort(arr, position + 1, right);
    }
  }

  public static int partition(int[] arr, int left, int right){
    int pivot = arr[right];
    int low = left;

    for(int i = left; i < right; i++){
      if(arr[i] <= pivot){
        swap(arr, i, low);
        low++;
      }
    }
    swap(arr, right, low );
    return low;
  }

  public static void swap(int[] arr, int i, int low){
    int temp = arr[i];
    arr[i] = arr[low];
    arr[low] = temp;
  }
}
