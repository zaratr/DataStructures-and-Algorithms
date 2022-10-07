package datastructures.array.insertShiftArray;

public class InsertShiftArray {
  private int[] arr;

  public int[] insertShiftArray(int[] arr, int toAdd)
  {
      if(arr.length == 0) return arr;
      int[] newArr = new int[arr.length + 1];
      int middleIndex = arr.length / 2, element = 0;//little endian language aka floor concat
      for(int i = 0 ; i < newArr.length; ++i)
      {
          if(i == middleIndex)
          {
            element = i;

            newArr[middleIndex] = toAdd;
            ++i;//just inserted at middle. now shift everything
          }
          newArr[i] = arr[element];
          ++element;
      }
      this.arr = newArr;//for the toString.
      return newArr;
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
