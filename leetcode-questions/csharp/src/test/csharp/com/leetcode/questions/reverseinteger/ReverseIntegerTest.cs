using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.reverseinteger;
using com.leetcode.questions.support;

namespace com.leetcode.questions.reverseinteger;

public class ReverseIntegerTest {

    private const string CasesFileName = "reverse-integer.json";

    public ReverseIntegerTest() {

    }

    [Fact]
    public void TestCases() {
        GeneratedLeetCodeTestHarness.Run(typeof(Solution), "Reverse", GeneratedLeetCodeTestHarness.ReadCasesFile(CasesFileName));
    }
}
