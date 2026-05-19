package com.leetcode.questions.removeduplicatesfromsortedarray;

import com.leetcode.questions.leetcode.editor.en.RemoveDuplicatesFromSortedArray;
import com.leetcode.questions.support.GeneratedLeetCodeTestHarness;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import java.nio.file.Files;
import java.nio.file.Path;

public class RemoveDuplicatesFromSortedArrayTest {

    private static final Path CASES_PATH = Path.of("generated-test-cases", "remove-duplicates-from-sorted-array.json");

    public RemoveDuplicatesFromSortedArrayTest() {

    }

    @Test
    public void testCases() throws Exception {
        GeneratedLeetCodeTestHarness.run(RemoveDuplicatesFromSortedArray.Solution.class, "removeDuplicates", Files.readString(CASES_PATH));
    }
}
