package datastructures.array;

import datastructures.array.sumMatrix.SumMatrix;
import java.util.Arrays;
import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;

public class SumMatrixTest {
  @Test
  public void testSumRowsOne(){
    SumMatrix sut = new SumMatrix();
    int[]  expected = {6, 15, 18};
    assertTrue(Arrays.equals(expected, sut.sumRows(new int[][]{ {1, 2, 3}, {3, 5, 7}, {1, 7, 10} })));
  }
  @Test
  public void testSumRowsTwo(){
    SumMatrix sut = new SumMatrix();
    int[] res = sut.sumRows(new int[][]{ {0, 1, 5}, {-4, 7, 2}, {-3, 12, 11} });
    int[] expected = {6, 5, 20};
    assertTrue(Arrays.equals(expected, res));

  }

  //sums the total - not what the question ask for
  @Test
  public void testSumMatrix()
  {
    int A[][] = new int[][]
      {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
      };
    SumMatrix sut = new SumMatrix();
    int sum = sut.sumMatrix(A);
    assertEquals("" + sum, "9");
  }
  @Test
  public void testRecSumRows(){
    SumMatrix sut = new SumMatrix();
    int[] res = sut._sumRows(new int[][]{ {0, 1, 5}, {-4, 7, 2}, {-3, 12, 11} });
    int[] expected = {6, 5, 20};
    assertTrue(Arrays.equals(expected, res));
  }

  @Test
  public void testRecSumRowsUnequal() {
    SumMatrix sut = new SumMatrix();
    int[] res = sut._sumRows(new int[][]{{0, 1}, {-4, 7, 2}, {-3, 12, 11, 1}});
    int[] expected = {1, 5, 21};
    assertTrue(Arrays.equals(expected, res));
  }
}
