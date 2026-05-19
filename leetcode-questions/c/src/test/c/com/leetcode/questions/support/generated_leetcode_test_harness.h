#ifndef GENERATED_LEETCODE_TEST_HARNESS_H
#define GENERATED_LEETCODE_TEST_HARNESS_H

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

static void leetcode_assert_int_equal(int expected, int actual, int case_index) {
    if (expected != actual) {
        fprintf(stderr, "case %d failed: expected %d actual %d\n", case_index, expected, actual);
        assert(expected == actual);
    }
}

static void leetcode_assert_long_equal(long long expected, long long actual, int case_index) {
    if (expected != actual) {
        fprintf(stderr, "case %d failed: expected %lld actual %lld\n", case_index, expected, actual);
        assert(expected == actual);
    }
}

static void leetcode_assert_bool_equal(bool expected, bool actual, int case_index) {
    if (expected != actual) {
        fprintf(stderr, "case %d failed: expected %d actual %d\n", case_index, expected, actual);
        assert(expected == actual);
    }
}

static void leetcode_assert_int_array_equal(const int* expected, int expected_size,
                                            const int* actual, int actual_size,
                                            int case_index) {
    if (expected_size != actual_size) {
        fprintf(stderr, "case %d failed: expected size %d actual size %d\n",
                case_index, expected_size, actual_size);
        assert(expected_size == actual_size);
    }
    for (int i = 0; i < expected_size; ++i) {
        if (expected[i] != actual[i]) {
            fprintf(stderr, "case %d failed at index %d: expected %d actual %d\n",
                    case_index, i, expected[i], actual[i]);
            assert(expected[i] == actual[i]);
        }
    }
}

#endif
