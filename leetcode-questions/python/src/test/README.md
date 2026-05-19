# Python Tests

Tests live under:

```text
src/test/python/com/leetcode/questions/<problem_slug>/test_<ProblemName>.py
```

Run from the Python project root:

```powershell
cd C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions\python
```

## Generate A Problem

From the pipeline directory:

```powershell
cd C:\Users\zarat\IdeaProjects\leetcodetestsuite\DatabasePipeline
$env:LEETCODE_QUESTIONS_ROOT='C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions'
.\venv\Scripts\python.exe .\orchestrator.py --id 2 --lang python --robust
```

On another PC, change `LEETCODE_QUESTIONS_ROOT` to that machine's
`leetcode-questions` path. If this is not set and the default path does not
exist, generation can fail or write to the wrong place.

## Run One Test File

```powershell
.\venv\Scripts\python.exe -m unittest .\src\test\python\com\leetcode\questions\twosum\test_TwoSum.py
```

Problem 2 example:

```powershell
.\venv\Scripts\python.exe -m unittest .\src\test\python\com\leetcode\questions\addtwonumbers\test_AddTwoNumbers.py
```

## Run All Tests

```powershell
.\venv\Scripts\python.exe -m unittest discover -s .\src\test\python -p "test*.py"
```

## What To Expect

Generated tests contain input and expected output from
`leetcode_pyleet_data.parsed_cases`. When generated with `--robust`, additional
usable cases may be merged from `leetcode_complete_data.test_cases`.

Supported Python tests call the shared `unittest` harness:

```text
src/test/python/com/leetcode/questions/support/generated_leetcode_test_harness.py
```

Generated tests read cases from `generated-test-cases/<title_slug>.json` and
call `run_cases(...)`. The case files are generated artifacts and are ignored
by Git. Unsupported shapes may still fall back to comments or generated
best-effort code.

- Compile/import errors are setup or generator problems.
- Assertion failures are expected while generated solution methods return
  stubs like `None`.
- Linked list, tree, design, and SQL shapes may include parsed input/expected
  output as comments until direct object builders are implemented.
