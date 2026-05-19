using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.projectionareaof3dshapes;
using com.leetcode.questions.support;

namespace com.leetcode.questions.projectionareaof3dshapes;

public class ProjectionAreaOf3dShapesTest {

    private const string CasesFileName = "projection-area-of-3d-shapes.json";

    public ProjectionAreaOf3dShapesTest() {

    }

    [Fact]
    public void TestCases() {
        GeneratedLeetCodeTestHarness.Run(typeof(Solution), "ProjectionArea", GeneratedLeetCodeTestHarness.ReadCasesFile(CasesFileName));
    }
}
