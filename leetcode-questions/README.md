# leetcode-questions

Generated LeetCode challenge and test files for multiple languages.

Generation is handled by:

```text
C:\Users\zarat\IdeaProjects\leetcodetestsuite\DatabasePipeline\orchestrator.py
```

## Generate Files

From the pipeline directory:

```powershell
cd C:\Users\zarat\IdeaProjects\leetcodetestsuite\DatabasePipeline
.\venv\Scripts\python.exe .\orchestrator.py --id 2 --lang python --robust
```

On another PC, set the target path first:

```powershell
$env:LEETCODE_QUESTIONS_ROOT='C:\path\to\DataStructures-and-Algorithms\leetcode-questions'
```

Without that variable, the orchestrator writes to:

```text
C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions
```

## Generated Tests

Generated tests use `leetcode_pyleet_data.parsed_cases` for input and expected
output. When generated with `--robust`, additional usable cases may be merged
from `leetcode_complete_data.test_cases`.

Generated tests use shared support code for supported scalar, string, array,
and list shapes:

```text
java/src/test/java/com/leetcode/questions/support/GeneratedLeetCodeTestHarness.java
python/src/test/python/com/leetcode/questions/support/generated_leetcode_test_harness.py
csharp/src/test/csharp/com/leetcode/questions/support/GeneratedLeetCodeTestHarness.cs
c/src/test/c/com/leetcode/questions/support/generated_leetcode_test_harness.h
cpp/src/test/cpp/com/leetcode/questions/support/GeneratedLeetCodeTestHarness.hpp
```

Java, Python, and C# generated tests read JSON case data from:

```text
<language>/generated-test-cases/<title_slug>.json
```

Those files are generated artifacts and are ignored by Git. Re-run
`orchestrator.py` to recreate them. C and C++ generated tests still provide
compile-time call adapters, but comparisons go through shared support headers.
For linked lists, trees, design classes, SQL/table problems, or other
unsupported shapes, the test file still includes the parsed input and expected
output as comments.

## Language Test READMEs

- [C tests](c/src/test/README.md)
- [C++ tests](cpp/src/test/README.md)
- [C# tests](csharp/src/test/README.md)
- [Java tests](java/src/test/README.md)
- [Python tests](python/src/test/README.md)

## Validation Rule

Compile/import/test-runner errors should be fixed in the generator or project
setup. Assertion failures are expected while generated solution bodies are
stubs.
