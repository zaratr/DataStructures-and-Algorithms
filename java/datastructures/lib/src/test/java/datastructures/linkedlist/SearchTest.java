package datastructures.linkedlist;

import org.junit.jupiter.api.Test;

import java.util.*;

import static datastructures.linkedlist.Search.ALGORITHM.*;
import static org.junit.jupiter.api.Assertions.*;

public class SearchTest {
  private final int[] UNSORTED = new int[]{1,5,4,5,2};
  private final int[] SORTED = new int[] {1,2,3,4};
  private List<Integer> ArraylistTestSorted = Arrays.asList(new Integer[]{1,5,4,5,2});
  private List<Integer> ArraylistTestUnsorted = Arrays.asList(new Integer[]{1,5,4,5,2});
  private final int ITERATION = 1, RECURSION = 2;
  //Constructors
  //Helper Methods
  private void build(LinkedList list,int[] arrayType)
  {
    if(list.getList() != null)
    {
      return;
    }
    int size = arrayType.length;
    for(int i = 0; i < size; ++i)
    {
      list.append(arrayType[i]);
    }
    return;

  }

  //testers
  @Test
  public void testLinearSearch()
  {
    //can be sorted or unsorted.
    //O(n) since the worst case is traversal to the end.
    //for loop is O(n) + varables O(1), thus the limit ot infinity summation is O(n). O(1) disapears
    //recursion:
    //
    Search sut = new Search();
    build(sut, UNSORTED);

    assertTrue(sut.wrapperSearchAlgorithm(ITERATION, LINEAR, 2, null));
    assertTrue(sut.wrapperSearchAlgorithm(RECURSION, LINEAR, 2, null));
    assertFalse(sut.wrapperSearchAlgorithm(ITERATION, LINEAR, 20, null));
    assertFalse(sut.wrapperSearchAlgorithm(RECURSION, LINEAR, 20, null));

    return;
  }


  @Test
  public void testBinarySearch()
  {
    //binary search is sorted and works well with lists or sets.
    //linked list traversal can not jump to middle of list
    //Algorithm for time is O(nLogn) - since we divide length of list by half,
      //every iteration, O(N/2 + N/2 + N/2 -> N/(2^3) and space O(1)
    Search sut = new Search();
    build(sut, SORTED);
    //assertTrue(sut.wrapperSearchAlgorithm(ITERATION, BINARY, 2, SORTED));

    return;
  }
}

