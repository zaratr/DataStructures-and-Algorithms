package com.leetcode.questions.theskylineproblem;

import com.leetcode.questions.leetcode.editor.en.TheSkylineProblem;
import com.leetcode.questions.support.GeneratedLeetCodeTestHarness;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import java.nio.file.Files;
import java.nio.file.Path;

public class TheSkylineProblemTest {

    private static final Path CASES_PATH = Path.of("generated-test-cases", "the-skyline-problem.json");

    public TheSkylineProblemTest() {

    }

    @Test
    public void testCases() throws Exception {
        GeneratedLeetCodeTestHarness.run(TheSkylineProblem.Solution.class, "solve", Files.readString(CASES_PATH));
    }
}
