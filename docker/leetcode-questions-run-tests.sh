#!/usr/bin/env bash
set -euo pipefail

ROOT="${LEETCODE_QUESTIONS_ROOT:-/workspace/leetcode-questions}"
MODE="${LEETCODE_RUN_MODE:-validate}"

export LANG="${LANG:-C.UTF-8}"
export LC_ALL="${LC_ALL:-C.UTF-8}"
export JAVA_TOOL_OPTIONS="${JAVA_TOOL_OPTIONS:-} -Dfile.encoding=UTF-8"

cd "$ROOT"

run_python_validate() {
  echo "==> Python: compile main and test sources"
  cd "$ROOT/python"
  python3 -m compileall -q src/main/python src/test/python
}

run_java_validate() {
  echo "==> Java: compile main and test classes"
  cd "$ROOT/java"
  java -Dorg.gradle.appname=gradlew -classpath gradle/wrapper/gradle-wrapper.jar org.gradle.wrapper.GradleWrapperMain testClasses --no-daemon
}

run_csharp_validate() {
  echo "==> C#: restore and build"
  cd "$ROOT/csharp"
  dotnet restore leetcode-questions.csproj
  dotnet build leetcode-questions.csproj --no-restore
}

run_native_portability_check() {
  echo "==> C/C++: check for Windows-only absolute includes"
  cd "$ROOT"
  if grep -RInE '#include "([A-Za-z]:/|[A-Za-z]:\\)' c/src/test cpp/src/test; then
    echo
    echo "C/C++ generated tests still contain Windows absolute #include paths."
    echo "Skipping container syntax checks until the generator emits portable relative includes."
  else
    echo "==> C: syntax-check generated tests"
    find c/src/test/c -name '*Test.c' -print0 \
      | xargs -0 -r -n1 gcc -std=c11 -Wall -Wextra -fsyntax-only

    echo "==> C++: syntax-check generated tests"
    find cpp/src/test/cpp -name '*Test.cpp' -print0 \
      | xargs -0 -r -n1 g++ -std=c++17 -Wall -Wextra -fsyntax-only
  fi
}

run_python_tests() {
  echo "==> Python: run unittest discovery"
  cd "$ROOT/python"
  python3 -m unittest discover -s src/test/python -p "test*.py"
}

run_java_tests() {
  echo "==> Java: run Gradle tests"
  cd "$ROOT/java"
  java -Dorg.gradle.appname=gradlew -classpath gradle/wrapper/gradle-wrapper.jar org.gradle.wrapper.GradleWrapperMain test --no-daemon
}

run_csharp_tests() {
  echo "==> C#: run dotnet tests"
  cd "$ROOT/csharp"
  dotnet restore leetcode-questions.csproj
  dotnet test leetcode-questions.csproj --no-restore
}

case "$MODE" in
  validate)
    run_python_validate
    run_java_validate
    run_csharp_validate
    run_native_portability_check
    ;;
  test)
    run_python_tests
    run_java_tests
    run_csharp_tests
    run_native_portability_check
    ;;
  shell)
    exec bash
    ;;
  *)
    echo "Unknown LEETCODE_RUN_MODE '$MODE'. Use validate, test, or shell." >&2
    exit 2
    ;;
esac
