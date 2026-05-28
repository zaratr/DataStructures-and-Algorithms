using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.twosum;
using com.leetcode.questions.support;

namespace com.leetcode.questions.twosum;

public class TwoSumTest {

    private const string CasesFileName = "two-sum.json";

    public TwoSumTest() {

    }

    [Fact]
    public void TestCases() {
        GeneratedLeetCodeTestHarness.Run(typeof(Solution), "TwoSum", GeneratedLeetCodeTestHarness.ReadCasesFile(CasesFileName));
    }
}
