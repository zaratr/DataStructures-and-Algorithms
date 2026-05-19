using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.longestcommonprefix;
using com.leetcode.questions.support;

namespace com.leetcode.questions.longestcommonprefix;

public class LongestCommonPrefixTest {

    private const string CasesFileName = "longest-common-prefix.json";

    public LongestCommonPrefixTest() {

    }

    [Fact]
    public void TestCases() {
        GeneratedLeetCodeTestHarness.Run(typeof(Solution), "LongestCommonPrefix", GeneratedLeetCodeTestHarness.ReadCasesFile(CasesFileName));
    }
}
