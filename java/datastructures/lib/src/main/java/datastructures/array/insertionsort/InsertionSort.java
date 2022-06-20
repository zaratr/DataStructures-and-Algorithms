package datastructures.array.insertionsort;

public class InsertionSort {


  private int[] arr;
  public InsertionSort(){
//    this.arr =new int[];
  }
  public InsertionSort(int[] A)
  {
    this.arr = A;
  }

  public void insertionSort(int [] arr)
  {
    insertionSort();
  }
  public int[] insertionSort()
  {
    if(arr == null) return arr;
    if(arr.length < 2) return arr;

    //local varable instantiation , declarations
    //some quick substitution for Math reasons
    int N = arr.length;
    int key; int space;
    for(int i = 1; i < N; i++)
    {
      key = arr[i];
      space = i;
      for(int j = space - 1; j >= 0; j--)
      {
        if(arr[j] > key)
        {
          arr[j + 1] = arr[j];
          space = j;
          continue;
        }
        break;
      }
      arr[space] = key;
    }
    return arr;
  }


  @Override
  public String toString()
  {
    String toDisplay = "";
    for(int i : arr)
    {
      toDisplay += i + ", ";
    }
    return "[" + toDisplay + "]";
  }

}
