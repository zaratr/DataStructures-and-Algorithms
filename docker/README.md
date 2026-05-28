# Docker Runners

This directory is for toolchain-specific local CI runners. Add one Dockerfile
per runnable environment, not one per source file.

Current runners:

```text
cplusplus.Dockerfile  CMake, GCC, Make, and GoogleTest for cplusplus/
dotnet.Dockerfile     .NET 5 SDK for c-sharp/
java.Dockerfile       Temurin JDK 11 for java/
javascript.Dockerfile Node.js 12 for javascript/
leetcode-questions.Dockerfile
                     .NET 8, Python 3, JDK 17, GCC, and G++ for leetcode-questions/
python.Dockerfile     Python 3.9 for python/
```

Run one workflow locally:

```powershell
docker compose run --rm cpp-cmake
docker compose run --rm dotnet
docker compose run --rm java
docker compose run --rm javascript
docker compose run --rm leetcode-questions
docker compose run --rm python
```

Enter the LeetCode questions dev container:

```powershell
docker compose run --rm leetcode-questions bash
```

Run full LeetCode assertion tests when generated case files are available:

```powershell
docker compose run --rm -e LEETCODE_RUN_MODE=test leetcode-questions
```

Run every workflow:

```powershell
docker compose run --rm cpp-cmake
docker compose run --rm dotnet
docker compose run --rm java
docker compose run --rm javascript
docker compose run --rm leetcode-questions
docker compose run --rm python
```
