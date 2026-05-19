package com.leetcode.questions._3sum;

import com.leetcode.questions.leetcode.editor.en._3sum;
import com.leetcode.questions.support.GeneratedLeetCodeTestHarness;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import java.nio.file.Files;
import java.nio.file.Path;

public class _3sumTest {

    private static final Path CASES_PATH = Path.of("generated-test-cases", "3sum.json");

    public _3sumTest() {

    }

    @Test
    public void testCases() throws Exception {
        GeneratedLeetCodeTestHarness.run(_3sum.Solution.class, "solve", Files.readString(CASES_PATH));
    }
}
