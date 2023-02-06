package datastructures.array;

import datastructures.array.reversearray.ReverseArray;
import org.junit.jupiter.api.Test;

import java.util.Arrays;

import static org.junit.jupiter.api.Assertions.*;


public class ReverseArrayTest {
  @Test
  public void testReverseArray(){
    ReverseArray sut = new ReverseArray();
    assertTrue(Arrays.equals(sut.reverseArray(new int[]{1,2,3,4,5}), new int[]{5,4,3,2,1}));
  }
}
