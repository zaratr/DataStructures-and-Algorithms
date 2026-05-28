using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.validparentheses;
using com.leetcode.questions.support;

namespace com.leetcode.questions.validparentheses;

public class ValidParenthesesTest {

    private const string CasesFileName = "valid-parentheses.json";

    public ValidParenthesesTest() {

    }

    [Fact]
    public void TestCases() {
        GeneratedLeetCodeTestHarness.Run(typeof(Solution), "IsValid", GeneratedLeetCodeTestHarness.ReadCasesFile(CasesFileName));
    }
}
