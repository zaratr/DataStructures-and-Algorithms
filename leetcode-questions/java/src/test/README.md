# Java Tests

Tests live under:

```text
src/test/java/com/leetcode/questions/<problem_slug>/<ProblemName>Test.java
```

Run from the Java project root:

```powershell
cd C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions\java
```

## Generate A Problem

```powershell
cd C:\Users\zarat\IdeaProjects\leetcodetestsuite\DatabasePipeline
$env:LEETCODE_QUESTIONS_ROOT='C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions'
.\venv\Scripts\python.exe .\orchestrator.py --id 2 --lang java --robust
```

## Run All Tests

```powershell
.\gradlew.bat test --no-daemon
```

## Run One Test Class

```powershell
.\gradlew.bat test --no-daemon --tests com.leetcode.questions.twosum.TwoSumTest
```

Problem 2 example:

```powershell
.\gradlew.bat test --no-daemon --tests com.leetcode.questions.addtwonumbers.AddTwoNumbersTest
```

## What To Expect

Generated Java tests use a shared JUnit harness for supported scalar, string,
array, and list shapes:

```text
src/test/java/com/leetcode/questions/support/GeneratedLeetCodeTestHarness.java
```

For those supported shapes, a generated `<ProblemName>Test.java` reads cases
from:

```text
generated-test-cases/<title_slug>.json
```

The case files are generated artifacts and are ignored by Git. The harness
parses JSON cases, coerces arguments to the Java method signature, normalizes
return values, and performs the assertion. Linked list, tree, design, and SQL
shapes may currently preserve the parsed input/expected output as comments
instead of direct object assertions.

- `compileJava` or `compileTestJava` failures are setup or generator problems.
- Test assertion failures are expected while generated `Solution` methods are
  stubs.
