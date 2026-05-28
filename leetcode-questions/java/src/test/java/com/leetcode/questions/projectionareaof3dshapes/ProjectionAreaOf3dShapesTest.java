package com.leetcode.questions.projectionareaof3dshapes;

import com.leetcode.questions.leetcode.editor.en.ProjectionAreaOf3dShapes;
import com.leetcode.questions.support.GeneratedLeetCodeTestHarness;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import java.nio.file.Files;
import java.nio.file.Path;

public class ProjectionAreaOf3dShapesTest {

    private static final Path CASES_PATH = Path.of("generated-test-cases", "projection-area-of-3d-shapes.json");

    public ProjectionAreaOf3dShapesTest() {

    }

    @Test
    public void testCases() throws Exception {
        GeneratedLeetCodeTestHarness.run(ProjectionAreaOf3dShapes.Solution.class, "projectionArea", Files.readString(CASES_PATH));
    }
}
