using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.theskylineproblem;
using com.leetcode.questions.support;

namespace com.leetcode.questions.theskylineproblem;

public class TheSkylineProblemTest {

    private const string CasesFileName = "the-skyline-problem.json";

    public TheSkylineProblemTest() {

    }

    [Fact]
    public void TestCases() {
        GeneratedLeetCodeTestHarness.Run(typeof(Solution), "GetSkyline", GeneratedLeetCodeTestHarness.ReadCasesFile(CasesFileName));
    }
}
