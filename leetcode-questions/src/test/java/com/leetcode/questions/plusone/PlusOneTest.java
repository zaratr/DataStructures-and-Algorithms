package com.leetcode.questions.plusone;

import com.leetcode.questions.leetcode.editor.en.PlusOne;
import org.junit.jupiter.api.Test;

import java.util.Arrays;

import static org.junit.jupiter.api.Assertions.*;

public class PlusOneTest {
  @Test
  public void testPlusOne(){
    //int[] test = new int[]{1,2,3};
    //int[] expected = new int[]{1,2,4};

    int[] test = new int[]{9};
    int[] expected = new int[]{1,0};

    PlusOne sut = new PlusOne(test);
    sut.main();

    assertTrue(Arrays.equals(expected, sut.getResult()));
  }
}
