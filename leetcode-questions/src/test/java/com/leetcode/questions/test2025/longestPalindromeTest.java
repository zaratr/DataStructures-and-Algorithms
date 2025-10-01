package com.leetcode.questions.test2025;

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import com.leetcode.questions.leetcode.editor.en.LongestPalindromicSubstring_5;

public class longestPalindromeTest {
  String edgeCase1;
  String edgeCase2;
  String edgeCase3;
  String edgeCase4;
  String edgeCase5;
  String edgeCase6;
  String edgeCase7;
  String edgeCase8;
  String edgeCase9;
  String edgeCase10;
  String edgeCase11;
  String edgeCase12;
  String edgeCase13;
  String edgeCase14;

  longestPalindromeTest(){
    edgeCase1 = "aA";
    edgeCase2 = "rAceCar";
    edgeCase3 = "abba";
    edgeCase4 = "ab";
    edgeCase5 = "a";
    edgeCase6 = "aaa";
    edgeCase7 = "aaaa";
    edgeCase8 = "abcdef";
    edgeCase9 = "abbc";
    edgeCase10 = "aabcb";
    edgeCase11 = "xabaxyy";
    edgeCase12 = "abacab";
    edgeCase13 = "bbaaabbaaa";
    edgeCase14 = "babad";

  }

  @Test public void edgeCaseTest1(){
    assertEquals("a", new LongestPalindromicSubstring_5().main(edgeCase1));
  }
  @Test public void edgeCaseTest23(){
    assertEquals("racecar", new LongestPalindromicSubstring_5().main(edgeCase2));
    assertEquals("abba", new LongestPalindromicSubstring_5().main(edgeCase3));
  }
  @Test public void edgeCaseTest4(){
    String actual = new LongestPalindromicSubstring_5().main(edgeCase4);
    String expected = actual.equals("a")? "a":"b";
    assertEquals(expected, actual);
  }
  @Test public void edgeCaseTest567(){
    assertEquals("a", new LongestPalindromicSubstring_5().main(edgeCase5));
    assertEquals("ab", new LongestPalindromicSubstring_5().main(edgeCase6));
    assertEquals("ab", new LongestPalindromicSubstring_5().main(edgeCase7));
  }
  @Test public void edgeCaseTest89(){
    assertEquals("a", new LongestPalindromicSubstring_5().main(edgeCase8));

  }

  @Test public void edgeCaseTest13(){
    assertEquals("aaabbaaa", new LongestPalindromicSubstring_5().main(edgeCase13));
  }

  @Test public void edgeCaseTest14(){
    assertEquals("bab", new LongestPalindromicSubstring_5().main(edgeCase14));
  }
}
