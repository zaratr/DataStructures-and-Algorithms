package com.leetcode.questions.longestsubstringwithoutrepeatingcharacters;

import com.leetcode.questions.leetcode.editor.en.LongestSubstringWithoutRepeatingCharacters;
import com.leetcode.questions.support.GeneratedLeetCodeTestHarness;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import java.nio.file.Files;
import java.nio.file.Path;

public class LongestSubstringWithoutRepeatingCharactersTest {

    private static final Path CASES_PATH = Path.of("generated-test-cases", "longest-substring-without-repeating-characters.json");

    public LongestSubstringWithoutRepeatingCharactersTest() {

    }

    @Test
    public void testCases() throws Exception {
        GeneratedLeetCodeTestHarness.run(LongestSubstringWithoutRepeatingCharacters.Solution.class, "lengthOfLongestSubstring", Files.readString(CASES_PATH));
    }
}
