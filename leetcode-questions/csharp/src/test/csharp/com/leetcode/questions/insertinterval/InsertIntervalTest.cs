using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.insertinterval;
using com.leetcode.questions.support;

namespace com.leetcode.questions.insertinterval;

public class InsertIntervalTest {

    private const string CasesFileName = "insert-interval.json";

    public InsertIntervalTest() {

    }

    [Fact]
    public void TestCases() {
        GeneratedLeetCodeTestHarness.Run(typeof(Solution), "Insert", GeneratedLeetCodeTestHarness.ReadCasesFile(CasesFileName));
    }
}
