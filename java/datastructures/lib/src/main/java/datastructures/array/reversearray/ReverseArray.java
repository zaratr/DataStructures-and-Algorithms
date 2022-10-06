package datastructures.array.reversearray;

import java.util.Arrays;

public class ReverseArray {
  public static void main(String [] args)
  {
    int[] out;
    if(args.length != 0) out = new ReverseArray().convertArgsandReverse(args);
    else
    out = new ReverseArray().reverseArray(new int[]{1,2,3});
    System.out.println(Arrays.toString(out));
  }
  public int[] reverseArray(int [] bigA)
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

  public int[] convertArgsandReverse(String[] args)
  {
    int[] arr = new int[args.length];
    for (int i = 0; i < args.length; ++i)
    {
      arr[i] = Integer.parseInt(args[i]);
    }
    reverseArray(arr);

    return arr;
  }
}
