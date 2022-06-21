package datastructures.array;

import datastructures.array.mergesort.MergeSort;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

public class MergeSortTest {
  int[] arr = new int[]{8,4,23,42,16,15};
  int[] assertArray = new int[]{4,8,15,16,23,42};

  @Test
  public void testMergeSort()
  {
    MergeSort sut = new MergeSort(arr);
    assertArrayEquals(sut.mergeSort(), assertArray);
  }
  @Test
  public void testEmpty()
  {
    MergeSort sut = new MergeSort(null);
    assertArrayEquals(sut.mergeSort(), null);
  }

  @Test
  public void testOneElement()
  {
    MergeSort sut = new MergeSort(new int[]{1});
    assertArrayEquals(sut.mergeSort(), new int[]{1});
  }
  @Test
  public void testDuplicates()
  {
    MergeSort sut = new MergeSort(new int[]{1,1,1});
    assertArrayEquals(sut.mergeSort(), new int[]{1,1,1});
  }

}
