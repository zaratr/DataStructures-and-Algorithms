package datastructures.array;

import datastructures.array.insertShiftArray.InsertShiftArray;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;
public class InsertShiftArrayTest {
  @Test

  public void insertionTest()
  {
    int A[] = new int[]{3, 2, 1, 12, 13};
    InsertShiftArray sut = new InsertShiftArray();
    String check = "" + sut.insertShiftArray(A, 4);
    assertEquals(sut.toString(), "[3, 2, 4, 1, 12, 13, ]");
  }

}
