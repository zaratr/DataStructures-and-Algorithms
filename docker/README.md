# Docker Runners

This directory is for toolchain-specific local CI runners. Add one Dockerfile
per runnable environment, not one per source file.

Current runners:

```text
cplusplus.Dockerfile  CMake, GCC, Make, and GoogleTest for cplusplus/
dotnet.Dockerfile     .NET 5 SDK for c-sharp/
java.Dockerfile       Temurin JDK 11 for java/
javascript.Dockerfile Node.js 12 for javascript/
python.Dockerfile     Python 3.9 for python/
```

Run one workflow locally:

```powershell
docker compose run --rm cpp-cmake
docker compose run --rm dotnet
docker compose run --rm java
docker compose run --rm javascript
docker compose run --rm python
```

Run every workflow:

```powershell
docker compose run --rm cpp-cmake
docker compose run --rm dotnet
docker compose run --rm java
docker compose run --rm javascript
docker compose run --rm python
```
