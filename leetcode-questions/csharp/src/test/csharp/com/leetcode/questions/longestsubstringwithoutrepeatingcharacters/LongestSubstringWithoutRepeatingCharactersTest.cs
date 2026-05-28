using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.longestsubstringwithoutrepeatingcharacters;
using com.leetcode.questions.support;

namespace com.leetcode.questions.longestsubstringwithoutrepeatingcharacters;

public class LongestSubstringWithoutRepeatingCharactersTest {

    private const string CasesFileName = "longest-substring-without-repeating-characters.json";

    public LongestSubstringWithoutRepeatingCharactersTest() {

    }

    [Fact]
    public void TestCases() {
        GeneratedLeetCodeTestHarness.Run(typeof(Solution), "LengthOfLongestSubstring", GeneratedLeetCodeTestHarness.ReadCasesFile(CasesFileName));
    }
}
