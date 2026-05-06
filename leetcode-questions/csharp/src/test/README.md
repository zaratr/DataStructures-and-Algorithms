# C# Test Suite

Tests live under:

```text
src/test/csharp/com/leetcode/questions/<problem_slug>/<ProblemName>Test.cs
```

Run commands from the C# project root:

```powershell
cd C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions\csharp
```

Run all C# tests:

```powershell
dotnet test .\leetcode-questions.csproj
```

Run without restoring packages again:

```powershell
dotnet test .\leetcode-questions.csproj --no-restore
```

Run one test class by fully qualified name:

```powershell
dotnet test .\leetcode-questions.csproj --filter FullyQualifiedName~com.leetcode.questions._01matrix._01MatrixTest
```

Assertion failures are expected while solution stubs are incomplete. Build errors, namespace/type conflicts, or test discovery errors indicate boilerplate or project setup problems.
