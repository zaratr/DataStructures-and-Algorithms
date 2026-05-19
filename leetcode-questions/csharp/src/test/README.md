# C# Tests

Tests live under:

```text
src/test/csharp/com/leetcode/questions/<problem_slug>/<ProblemName>Test.cs
```

Run from the C# project root:

```powershell
cd C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions\csharp
```

## Generate A Problem

```powershell
cd C:\Users\zarat\IdeaProjects\leetcodetestsuite\DatabasePipeline
$env:LEETCODE_QUESTIONS_ROOT='C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions'
.\venv\Scripts\python.exe .\orchestrator.py --id 2 --lang csharp --robust
```

## Build

```powershell
dotnet build .\leetcode-questions.csproj --no-restore
```

## Run All Tests

```powershell
dotnet test .\leetcode-questions.csproj --no-restore
```

## Run One Test Class

```powershell
dotnet test .\leetcode-questions.csproj --no-restore --filter FullyQualifiedName~com.leetcode.questions.twosum.TwoSumTest
```

Problem 2 example:

```powershell
dotnet test .\leetcode-questions.csproj --no-restore --filter FullyQualifiedName~com.leetcode.questions.addtwonumbers.AddTwoNumbersTest
```

## What To Expect

Generated tests use `leetcode_pyleet_data.parsed_cases` for input and expected
output. When generated with `--robust`, additional usable cases may be merged
from `leetcode_complete_data.test_cases`.

Supported C# tests call the shared xUnit harness:

```text
src/test/csharp/com/leetcode/questions/support/GeneratedLeetCodeTestHarness.cs
```

Generated tests read cases from `generated-test-cases/<title_slug>.json` and
call `GeneratedLeetCodeTestHarness.Run(...)`. The case files are generated
artifacts and are ignored by Git. Unsupported shapes may still fall back to
comments or generated best-effort code.

Assertion failures are expected while C# solution methods are stubs. Build
errors, namespace/type conflicts, or test discovery errors are generator or
setup problems.
