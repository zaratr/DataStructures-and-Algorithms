package com.leetcode.questions.wordsearch;

import com.leetcode.questions.leetcode.editor.en.WordSearch;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class WordSearchTest {
    @Test
    public void testCases() {
        WordSearch.Solution solution = new WordSearch.Solution();
        // Auto-generated test cases:
        // Test Case 1
        char[][] board0 = new char[][]{new char[]{'A', 'B', 'C', 'E'}, new char[]{'S', 'F', 'C', 'S'}, new char[]{'A', 'D', 'E', 'E'}};
        String word0 = "ABCCED";
        boolean expected0 = true;
        assertEquals(expected0, solution.exist(board0, word0));

        // Test Case 2
        char[][] board1 = new char[][]{new char[]{'A', 'B', 'C', 'E'}, new char[]{'S', 'F', 'C', 'S'}, new char[]{'A', 'D', 'E', 'E'}};
        String word1 = "SEE";
        boolean expected1 = true;
        assertEquals(expected1, solution.exist(board1, word1));

        // Test Case 3
        char[][] board2 = new char[][]{new char[]{'A', 'B', 'C', 'E'}, new char[]{'S', 'F', 'C', 'S'}, new char[]{'A', 'D', 'E', 'E'}};
        String word2 = "ABCB";
        boolean expected2 = false;
        assertEquals(expected2, solution.exist(board2, word2));
    }
}
