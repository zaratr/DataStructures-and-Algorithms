using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.wordsearch;
using com.leetcode.questions.support;

namespace com.leetcode.questions.wordsearch;

public class WordSearchTest {

    private const string CasesFileName = "word-search.json";

    public WordSearchTest() {

    }

    [Fact]
    public void TestCases() {
        GeneratedLeetCodeTestHarness.Run(typeof(Solution), "Exist", GeneratedLeetCodeTestHarness.ReadCasesFile(CasesFileName));
    }
}
