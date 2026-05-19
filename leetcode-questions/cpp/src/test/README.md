# C++ Tests

Tests live under:

```text
src/test/cpp/com/leetcode/questions/<problem_slug>/<ProblemName>Test.cpp
```

Run from the C++ project root:

```powershell
cd C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions\cpp
```

If `g++` is not visible:

```powershell
$env:PATH='C:\Users\zarat\mingw64\bin;' + $env:PATH
```

## Generate A Problem

```powershell
cd C:\Users\zarat\IdeaProjects\leetcodetestsuite\DatabasePipeline
$env:LEETCODE_QUESTIONS_ROOT='C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions'
.\venv\Scripts\python.exe .\orchestrator.py --id 2 --lang cpp --robust
```

## Compile And Run One Test

```powershell
g++ -std=c++17 -Wall -Wextra -o TwoSumTest.exe src\test\cpp\com\leetcode\questions\twosum\TwoSumTest.cpp
.\TwoSumTest.exe
Remove-Item .\TwoSumTest.exe
```

Problem 2 example:

```powershell
g++ -std=c++17 -Wall -Wextra -o AddTwoNumbersTest.exe src\test\cpp\com\leetcode\questions\addtwonumbers\AddTwoNumbersTest.cpp
.\AddTwoNumbersTest.exe
Remove-Item .\AddTwoNumbersTest.exe
```

## Syntax Check All Generated C++ Tests

```powershell
Get-ChildItem .\src\test\cpp\com\leetcode\questions -Recurse -Filter *Test.cpp |
  ForEach-Object { g++ -std=c++17 -fsyntax-only $_.FullName }
```

## What To Expect

Generated tests use `leetcode_pyleet_data.parsed_cases` for input and expected
output. When generated with `--robust`, additional usable cases may be merged
from `leetcode_complete_data.test_cases`.

C++ tests include the shared assertion support header:

```text
src/test/cpp/com/leetcode/questions/support/GeneratedLeetCodeTestHarness.hpp
```

C++ generated tests still provide the compile-time method call adapter.
Comparisons for supported return shapes go through the shared header.

Assertion failures are expected while C++ solution methods are stubs. Compiler
errors, missing includes, or crashes before assertions are generator or setup
problems.
