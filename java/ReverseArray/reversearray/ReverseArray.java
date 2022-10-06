package reversearray;

import java.util.Arrays;

public class ReverseArray{
  public static void main(String [] args)
  {
    int[] arr;
    if(args.length != 0) {
      int[] argsToInt = new ReverseArray().convertArgsToInt(args);
      arr = new ReverseArray().reverseArray(argsToInt);
    }
    else
      arr = new ReverseArray().reverseArray(new int[]{1,2,3});
    System.out.println(Arrays.toString(arr));
    return;
  }
  private int[] reverseArray(int [] bigA)
  {
    int front=0, back = bigA.length -1, temp = 0;
    while(front < back)
    {
      temp = bigA[front];
      bigA[front] = bigA[back];
      bigA[back] = temp;
      --back;
      ++front;
    }
    return bigA;
  }
  private int[] convertArgsToInt(String[] toConvert)
  {
    if(toConvert.length == 0) return null;
    int[] convertedInt = new int[toConvert.length];
    for(int i = 0; i < toConvert.length; i++)
      convertedInt[i] = Integer.parseInt(toConvert[i]);
    return convertedInt;
  }
}
