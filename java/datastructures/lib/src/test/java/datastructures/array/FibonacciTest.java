package datastructures.array;

import datastructures.array.fibonacci.Fibonacci;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

public class FibonacciTest {
  @Test
  public void testFibOne(){
    int expected = 1;
    assertEquals(expected, Fibonacci.fib(1));
  }

  @Test
  public void testFibgreaterThanTwo(){
    int expected = 2;
    assertEquals(expected, Fibonacci.fib(3));
    expected = 3;
    assertEquals(expected, Fibonacci.fib(4));
    expected = 21;
    assertEquals(expected, Fibonacci.fib(8));
  }

  @Test
  public void recursive_testFibgreaterThanTwo(){
    int expected = 2;
    assertEquals(expected, Fibonacci._fib(3));
    expected = 3;
    assertEquals(expected, Fibonacci._fib(4));
    expected = 21;
    assertEquals(expected, Fibonacci._fib(8));
    expected = 0;
    assertEquals(expected, Fibonacci._fib(0));
    expected = 1;
    assertEquals(expected, Fibonacci._fib(1));
  }
}
