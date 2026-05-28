using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.removeduplicatesfromsortedarray;
using com.leetcode.questions.support;

namespace com.leetcode.questions.removeduplicatesfromsortedarray;

public class RemoveDuplicatesFromSortedArrayTest {

    private const string CasesFileName = "remove-duplicates-from-sorted-array.json";

    public RemoveDuplicatesFromSortedArrayTest() {

    }

    [Fact]
    public void TestCases() {
        GeneratedLeetCodeTestHarness.Run(typeof(Solution), "RemoveDuplicates", GeneratedLeetCodeTestHarness.ReadCasesFile(CasesFileName));
    }
}
