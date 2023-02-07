package datastructures.array;

import datastructures.array.binarysearch.BinarySearch;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

public class BinarySearchTest {

  @Test
  public void testBinarySearch(){
    BinarySearch sut = new BinarySearch();
    int[] test = {1,2,3,4,5,6,7,8,9,10,11};
    int actual = sut.binarySearch(test, 2);
    int expected = 1;
    assertEquals(expected, actual);
  }
}
