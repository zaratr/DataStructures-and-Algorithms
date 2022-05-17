public class ReverseArray{
  public static void main(String [] args)
  {
    new Main().reverseArray(new int[]{1,2,3});
  }
  public void reverseArray(int [] bigA)
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
    return ;
  }
}
