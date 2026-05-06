# C++ Test Suite

Tests live under:

```text
src/test/cpp/com/leetcode/questions/<problem_slug>/<ProblemName>Test.cpp
```

Run commands from the C++ project root:

```powershell
cd C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions\cpp
```

If `g++` is not already visible in the current terminal, prepend MinGW for this session:

```powershell
$env:PATH='C:\Users\zarat\mingw64\bin;' + $env:PATH
```

Compile and run the 01 Matrix smoke test:

```powershell
g++ -std=c++17 -Wall -Wextra -o _01MatrixTest.exe src\test\cpp\com\leetcode\questions\_01matrix\_01MatrixTest.cpp
.\_01MatrixTest.exe
Remove-Item .\_01MatrixTest.exe
```

Debug the same test with gdb:

```powershell
g++ -std=c++17 -g -O0 -Wall -Wextra -o _01MatrixTest.exe src\test\cpp\com\leetcode\questions\_01matrix\_01MatrixTest.cpp
gdb .\_01MatrixTest.exe
```

Assertion failures are expected while solution stubs are incomplete. Compiler errors, crashes before assertions, or missing includes indicate boilerplate or harness problems.
