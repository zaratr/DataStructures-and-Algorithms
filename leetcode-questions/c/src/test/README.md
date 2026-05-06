# C Test Suite

Tests live under:

```text
src/test/c/com/leetcode/questions/<problem_slug>/<ProblemName>Test.c
```

Run commands from the C project root:

```powershell
cd C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions\c
```

If `gcc` is not already visible in the current terminal, prepend MinGW for this session:

```powershell
$env:PATH='C:\Users\zarat\mingw64\bin;' + $env:PATH
```

Compile and run the 01 Matrix smoke test:

```powershell
gcc -std=c11 -Wall -Wextra -o _01MatrixTest.exe src\test\c\com\leetcode\questions\_01matrix\_01MatrixTest.c
.\_01MatrixTest.exe
Remove-Item .\_01MatrixTest.exe
```

Debug the same test with gdb:

```powershell
gcc -std=c11 -g -O0 -Wall -Wextra -o _01MatrixTest.exe src\test\c\com\leetcode\questions\_01matrix\_01MatrixTest.c
gdb .\_01MatrixTest.exe
```

Assertion failures or incorrect outputs indicate solution logic problems. Compiler errors, crashes before assertions, or missing imports/includes indicate boilerplate or harness problems.
