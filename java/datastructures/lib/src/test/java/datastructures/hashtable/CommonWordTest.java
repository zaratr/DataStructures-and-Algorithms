package datastructures.hashtable;

import datastructures.commonword.CommonWord;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class CommonWordTest {
  @Test
  public void commonWordTest()
  {
    CommonWord sut = new CommonWord();
    assertEquals("far", sut.commonWord("In a galaxy far, far away"));
    assertEquals( "taco", sut.commonWord("Taco cat ate a taco"));
    assertEquals("no", sut.commonWord("No. Try not. Do or do not. There is no Try"));
  }
}
