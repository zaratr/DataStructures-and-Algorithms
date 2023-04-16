package com.leetcode.questions.kangaroos;

import com.leetcode.questions.leetcode.editor.en.Number_Line_Jumps;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class NumberLineJumpsTest {
    @Test public void testNumberLine1(){
        Number_Line_Jumps sut = new Number_Line_Jumps();
        String actual = sut.kangaroo(14,4, 98, 2);
        assertEquals("YES", actual);
    }

    @Test public void testNumberLine2(){
        Number_Line_Jumps sut = new Number_Line_Jumps();
        String actual = sut.kangaroo(0, 3, 4, 2);
        assertEquals("YES", actual);
    }
     @Test public void testNumberLine3(){
        Number_Line_Jumps sut = new Number_Line_Jumps();
        String actual = sut.kangaroo(42, 3, 94, 2);
        assertEquals("YES", actual);
    }

}
