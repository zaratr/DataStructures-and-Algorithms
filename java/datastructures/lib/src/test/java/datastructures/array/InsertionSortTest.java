package datastructures.array;

import datastructures.array.insertionsort.InsertionSort;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

public class InsertionSortTest {

  @Test
  public void insertionSortTest()
  {

    int A[] = new int[]{3, 2, 1, 12, 13};
    InsertionSort sut = new InsertionSort(A);
    sut.insertionSort();
    assertEquals(sut.toString(), "[1, 2, 3, 12, 13, ]");
  }

}
