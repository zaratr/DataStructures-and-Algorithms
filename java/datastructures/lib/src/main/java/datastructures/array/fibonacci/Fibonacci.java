package datastructures.array.fibonacci;

public class Fibonacci {
  public static int fib(int toReach)
  {
    if(toReach < 2) return toReach;
    int n = 1;
    for(int term2 = 2; term2 <= toReach; ++term2)
    {
      n += (term2 - 2 == 2)? 1: (term2 - 2);
    }
    return n;
  }

  public static int _fib(int n){
    if(n < 2) return n;
    return _fib(n - 1) + _fib(n - 2);
  }
}
