# C Tests

Tests live under:

```text
src/test/c/com/leetcode/questions/<problem_slug>/<ProblemName>Test.c
```

Run from the C project root:

```powershell
cd C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions\c
```

If `gcc` is not visible:

```powershell
$env:PATH='C:\Users\zarat\mingw64\bin;' + $env:PATH
```

## Generate A Problem

```powershell
cd C:\Users\zarat\IdeaProjects\leetcodetestsuite\DatabasePipeline
$env:LEETCODE_QUESTIONS_ROOT='C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions'
.\venv\Scripts\python.exe .\orchestrator.py --id 2 --lang c --robust
```

## Compile And Run One Test

```powershell
gcc -std=c11 -Wall -Wextra -o TwoSumTest.exe src\test\c\com\leetcode\questions\twosum\TwoSumTest.c
.\TwoSumTest.exe
Remove-Item .\TwoSumTest.exe
```

Problem 2 example:

```powershell
gcc -std=c11 -Wall -Wextra -o AddTwoNumbersTest.exe src\test\c\com\leetcode\questions\addtwonumbers\AddTwoNumbersTest.c
.\AddTwoNumbersTest.exe
Remove-Item .\AddTwoNumbersTest.exe
```

## Syntax Check All Generated C Tests

```powershell
Get-ChildItem .\src\test\c\com\leetcode\questions -Recurse -Filter *Test.c |
  ForEach-Object { gcc -std=c11 -fsyntax-only $_.FullName }
```

## What To Expect

Generated tests use `leetcode_pyleet_data.parsed_cases` for input and expected
output. When generated with `--robust`, additional usable cases may be merged
from `leetcode_complete_data.test_cases`.

C tests include the shared C assertion support header:

```text
src/test/c/com/leetcode/questions/support/generated_leetcode_test_harness.h
```

C does not have runtime reflection, so generated tests still provide the
compile-time function call adapter. Comparisons for supported return shapes go
through the shared header.

Assertion failures are expected while C solution functions are stubs. Compiler
errors, missing includes, or crashes before assertions are generator or setup
problems.
