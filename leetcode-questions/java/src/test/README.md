# Java Test Suite

Tests live under:

```text
src/test/java/com/leetcode/questions/<problem_slug>/<ProblemName>Test.java
```

Run commands from the Java project root:

```powershell
cd C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions\java
```

Run the full suite:

```powershell
.\gradlew.bat test --no-daemon
```

Run a single test class:

```powershell
.\gradlew.bat test --no-daemon --tests com.leetcode.questions._01matrix._01MatrixTest
```

Run with the runner paths explicitly set:

```powershell
.\gradlew.bat test --no-daemon `
  -Dleetcode.runner.dir=C:\Users\zarat\IdeaProjects\leetcodetestsuite `
  -Dleetcode.runner.python=C:\Users\zarat\IdeaProjects\leetcodetestsuite\DatabasePipeline\venv\Scripts\python.exe
```

The Java tests use `LeetCodeRunner`, which shells out to the shared Python runner. `compileJava` and `compileTestJava` errors are setup issues. Assertion failures are expected while the solution methods are still stubs.
