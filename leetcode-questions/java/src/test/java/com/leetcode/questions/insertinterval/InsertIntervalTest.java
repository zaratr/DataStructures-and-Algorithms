package com.leetcode.questions.insertinterval;

import com.leetcode.questions.leetcode.editor.en.InsertInterval;
import com.leetcode.questions.support.GeneratedLeetCodeTestHarness;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import java.nio.file.Files;
import java.nio.file.Path;

public class InsertIntervalTest {

    private static final Path CASES_PATH = Path.of("generated-test-cases", "insert-interval.json");

    public InsertIntervalTest() {

    }

    @Test
    public void testCases() throws Exception {
        GeneratedLeetCodeTestHarness.run(InsertInterval.Solution.class, "insert", Files.readString(CASES_PATH));
    }
}
