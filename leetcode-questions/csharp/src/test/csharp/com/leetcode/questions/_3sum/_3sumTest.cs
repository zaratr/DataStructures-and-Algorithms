using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en._3sum;
using com.leetcode.questions.support;

namespace com.leetcode.questions._3sum;

public class _3sumTest {

    private const string CasesFileName = "3sum.json";

    public _3sumTest() {

    }

    [Fact]
    public void TestCases() {
        GeneratedLeetCodeTestHarness.Run(typeof(Solution), "ThreeSum", GeneratedLeetCodeTestHarness.ReadCasesFile(CasesFileName));
    }
}
