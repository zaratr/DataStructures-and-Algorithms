package com.leetcode.questions.wordsearch;

import com.leetcode.questions.leetcode.editor.en.WordSearch;
import com.leetcode.questions.support.GeneratedLeetCodeTestHarness;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import java.nio.file.Files;
import java.nio.file.Path;

public class WordSearchTest {

    private static final Path CASES_PATH = Path.of("generated-test-cases", "word-search.json");

    public WordSearchTest() {

    }

    @Test
    public void testCases() throws Exception {
        GeneratedLeetCodeTestHarness.run(WordSearch.Solution.class, "exist", Files.readString(CASES_PATH));
    }
}
