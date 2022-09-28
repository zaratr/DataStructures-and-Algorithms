package datastructures.array;

import datastructures.array.sumMatrix.SumMatrix;

import static org.junit.jupiter.api.Assertions.assertEquals;
import org.junit.jupiter.api.Test;

public class SumMatrixTest {
  @Test
  public void SumMatrixTest()
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

}
