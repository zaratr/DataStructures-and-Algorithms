package datastructures.array;

import datastructures.array.insertionsort.InsertionSort;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import java.util.Arrays;

public class InsertionSortTest {

  @Test
  public void insertionSortTest()
  {

    int testArr[] = new int[]{3, 2, 1, 12, 13};
    InsertionSort sut = new InsertionSort(testArr);
    int[] actual = sut.insertionSort();
    //assertEquals(sut.toString(), "[1, 2, 3, 12, 13, ]");
    assertTrue(Arrays.equals(new int[]{1,2,3,12,13}, actual));
  }

}
