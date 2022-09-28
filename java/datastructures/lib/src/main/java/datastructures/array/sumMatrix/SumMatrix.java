package datastructures.array.sumMatrix;

public class SumMatrix {

  //matrix has equal length of rows
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
}
