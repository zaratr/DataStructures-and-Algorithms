#pragma once

#include <cassert>
#include <iostream>
#include <string>
#include <vector>

namespace LeetCodeTestHarness {

template <typename T>
void assertEqual(const T& expected, const T& actual, int caseIndex) {
    if (!(expected == actual)) {
        std::cerr << "case " << caseIndex << " failed" << std::endl;
        assert(expected == actual);
    }
}

template <typename T>
void assertVectorEqual(const std::vector<T>& expected, const std::vector<T>& actual, int caseIndex) {
    if (expected != actual) {
        std::cerr << "case " << caseIndex << " failed: vector sizes "
                  << expected.size() << " != " << actual.size() << std::endl;
        assert(expected == actual);
    }
}

} // namespace LeetCodeTestHarness
