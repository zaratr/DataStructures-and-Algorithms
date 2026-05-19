"""Shared assertions for generated Python LeetCode tests."""
from __future__ import annotations

import copy
import inspect
import json


def run_cases(testcase, solution, method_name: str, cases_json: str) -> None:
    method = getattr(solution, method_name)
    param_count = len(inspect.signature(method).parameters)
    cases = json.loads(cases_json)
    for index, case in enumerate(cases):
        raw_input = case["input"]
        expected = case["expected"]
        args = raw_input if param_count != 1 and isinstance(raw_input, list) else [raw_input]
        actual = method(*copy.deepcopy(args))
        testcase.assertEqual(
            expected,
            actual,
            f"case {index} failed: input={raw_input!r} expected={expected!r} actual={actual!r}",
        )
