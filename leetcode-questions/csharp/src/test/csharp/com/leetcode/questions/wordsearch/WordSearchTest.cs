using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.wordsearch;

namespace com.leetcode.questions.wordsearch;

public class WordSearchTest {
    [Fact]
    public void TestCases() {
        var solution = new Solution();
        // Auto-generated test cases:
        // Test Case 1
        char[][] board0 = new char[][]{new char[]{'A', 'B', 'C', 'E'}, new char[]{'S', 'F', 'C', 'S'}, new char[]{'A', 'D', 'E', 'E'}};
        string word0 = "ABCCED";
        bool expected0 = true;
        Assert.Equal(expected0, solution.Exist(board0, word0));

        // Test Case 2
        char[][] board1 = new char[][]{new char[]{'A', 'B', 'C', 'E'}, new char[]{'S', 'F', 'C', 'S'}, new char[]{'A', 'D', 'E', 'E'}};
        string word1 = "SEE";
        bool expected1 = true;
        Assert.Equal(expected1, solution.Exist(board1, word1));

        // Test Case 3
        char[][] board2 = new char[][]{new char[]{'A', 'B', 'C', 'E'}, new char[]{'S', 'F', 'C', 'S'}, new char[]{'A', 'D', 'E', 'E'}};
        string word2 = "ABCB";
        bool expected2 = false;
        Assert.Equal(expected2, solution.Exist(board2, word2));
    }
}
