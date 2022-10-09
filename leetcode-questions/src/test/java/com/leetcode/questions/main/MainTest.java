package com.leetcode.questions.main;

import org.junit.jupiter.api.Test;

import main.Main;
import static org.junit.jupiter.api.Assertions.*;

public class MainTest {
    @Test
    public void testMain()
    {
        assertEquals("Hello world!", new Main().main(new String[]{"test"}));

    }
}
