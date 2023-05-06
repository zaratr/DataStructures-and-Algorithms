package datastructures.array.sumMatrix;

public class SumMatrix {

  //matrix of different row lengths
  public int[] sumRows(int[][] arr){
    if(arr.length == 0) return null;
    int[] sumMatrix = new int[arr.length];

    for(int i = 0 ; i < arr.length ; ++i){
      for(int element : arr[i]){
        sumMatrix[i]+= element;
      }
    }
    return sumMatrix;
  }

  //matrix has equal length of rows - returns the total of all integers in 2d array
  public int sumMatrix(int[][] arr)
  {
    int summation = 0;

    int column = 0, iter = 0;
    int size = arr.length * arr[0].length;
    for (int i = 0; i < size; i++)
    {
      if(iter == arr.length - 1)//check to see if at end of row
      {//if at end of row, then restart the iterator back to 0
        iter = 0;//cycle the index back to 0
        column = 0;
      }
      summation += arr[column][iter];
      ++iter;
      ++column;//go to next column
    }
    //skips the last element due to iteration method.
    //adding it to last
    return summation;
    //+ arr[arr.length -1][arr[0].length -1];
  }


  /**
   * wrapper method for recursive call.
   * @param arr
   * @return
   */
  public int[] _sumRows(int[][] arr){
    if(arr.length == 0) return null;
    return _sumRows(arr, new int[arr.length], 0, 0);
  }

  /**
   * recursive function that traverses a two demensional array. Base case happens when i > then the columns and only happens once due to recursive call
   * @param mArr - input : two demensional array
   * @param arr - one demonsional array
   * @param i - column counter
   * @param j - row counter
   * @return int[]
   */
  private int[] _sumRows(int[][] mArr, int[] arr, int i, int j){
    if(i >= mArr.length) return arr;
    arr[i] += mArr[i][j];
    return mArr[i].length -1 == j ?
      _sumRows(mArr, arr, ++i, 0):
      _sumRows(mArr, arr, i, ++j);
  }


}
