# Python Test Suite

Tests live under:

```text
src/test/python/com/leetcode/questions/<problem_slug>/test_<ProblemName>.py
```

Run commands from the Python project root:

```powershell
cd C:\Users\zarat\IdeaProjects\DataStructures-and-Algorithms\leetcode-questions\python
```

Run the 01 Matrix smoke test:

```powershell
.\venv\Scripts\python.exe -m unittest .\src\test\python\com\leetcode\questions\_01matrix\test__01Matrix.py
```

Run all Python tests:

```powershell
.\venv\Scripts\python.exe -m unittest discover -s .\src\test\python -p "test*.py"
```

If the shared runner dependencies are missing:

```powershell
.\venv\Scripts\python.exe -m pip install -r C:\Users\zarat\IdeaProjects\leetcodetestsuite\runner\requirements.txt
```

The Python tests import the shared `runner` package from `C:\Users\zarat\IdeaProjects\leetcodetestsuite`. Import or database errors are setup issues. Assertion failures are expected while solution methods are still stubs.
