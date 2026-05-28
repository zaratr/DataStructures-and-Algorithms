#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "../support/GeneratedLeetCodeTestHarness.hpp"
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/LongestCommonPrefix.cpp"

int main() {
    Solution solution;
    // Test Case 1
    vector<string> strs0 = vector<string>{"flower", "flow", "flight"};
    string expected0 = "fl";

    // Test Case 2
    vector<string> strs1 = vector<string>{"dog", "racecar", "car"};
    string expected1 = "";

    // Test Case 3
    vector<string> strs2 = vector<string>{"hello", "helium", "helper"};
    string expected2 = "hel";

    // Test Case 4
    vector<string> strs3 = vector<string>{"a"};
    string expected3 = "a";

    // Test Case 5
    vector<string> strs4 = vector<string>{"apple", "app", "apricot"};
    string expected4 = "ap";

    // Test Case 6
    vector<string> strs5 = vector<string>{"abcd", "abce", "abcf"};
    string expected5 = "abc";

    // Test Case 7
    vector<string> strs6 = vector<string>{"apple", "app", "application"};
    string expected6 = "app";

    // Test Case 8
    vector<string> strs7 = vector<string>{"interview", "interrupt", "inter"};
    string expected7 = "inter";

    // Test Case 9
    vector<string> strs8 = vector<string>{"test", "testing", "tester"};
    string expected8 = "test";

    // Test Case 10
    vector<string> strs9 = vector<string>{"hello", "hell", "hella"};
    string expected9 = "hell";

    // Test Case 11
    vector<string> strs10 = vector<string>{"same", "same", "same"};
    string expected10 = "same";

    // Test Case 12
    vector<string> strs11 = vector<string>{"single"};
    string expected11 = "single";

    // Test Case 13
    vector<string> strs12 = vector<string>{"ab", "abc", "abcd"};
    string expected12 = "ab";

    // Test Case 14
    vector<string> strs13 = vector<string>{"abc", "abc", "abc"};
    string expected13 = "abc";

    // Test Case 15
    vector<string> strs14 = vector<string>{"a", "ab", "abc"};
    string expected14 = "a";

    // Test Case 16
    vector<string> strs15 = vector<string>{"a", "a", "a", "a"};
    string expected15 = "a";

    // Test Case 17
    vector<string> strs16 = vector<string>{"abc", "abcd", "abcde"};
    string expected16 = "abc";

    // Test Case 18
    vector<string> strs17 = vector<string>{"abcd", "abc", "ab", "a"};
    string expected17 = "a";

    // Test Case 19
    vector<string> strs18 = vector<string>{"banana", "bandana", "banner"};
    string expected18 = "ban";

    // Test Case 20
    vector<string> strs19 = vector<string>{"aaaa", "aaab", "aaac"};
    string expected19 = "aaa";

    // Test Case 21
    vector<string> strs20 = vector<string>{"mississippi", "mississauga", "mission", "missed"};
    string expected20 = "miss";

    // Test Case 22
    vector<string> strs21 = vector<string>{"commonality", "commonwealth", "common", "commons"};
    string expected21 = "common";

    // Test Case 23
    vector<string> strs22 = vector<string>{"repetition", "repetitive", "repeat", "repel", "repeal", "repetend"};
    string expected22 = "repe";

    // Test Case 24
    vector<string> strs23 = vector<string>{"million", "millionaire", "millionth", "millionfold"};
    string expected23 = "million";

    // Test Case 25
    vector<string> strs24 = vector<string>{"algorithm", "algorithmic", "algebra", "alignment"};
    string expected24 = "al";

    // Test Case 26
    vector<string> strs25 = vector<string>{"difficult", "difficulty", "differ"};
    string expected25 = "diff";

    // Test Case 27
    vector<string> strs26 = vector<string>{"environment", "environmental", "envision", "enzyme"};
    string expected26 = "en";

    // Test Case 28
    vector<string> strs27 = vector<string>{"a", "aa", "aaa", "aaaa"};
    string expected27 = "a";

    // Test Case 29
    vector<string> strs28 = vector<string>{"xylophone", "xylotomy", "xylography", "xylograph"};
    string expected28 = "xylo";

    // Test Case 30
    vector<string> strs29 = vector<string>{"a", "aa", "aaa", "aaaa", "aaaaa"};
    string expected29 = "a";

    // Test Case 31
    vector<string> strs30 = vector<string>{"abcde", "abc", "ab", "a", "abcde"};
    string expected30 = "a";

    // Test Case 32
    vector<string> strs31 = vector<string>{"unique", "unit", "universe", "unity", "un"};
    string expected31 = "un";

    // Test Case 33
    vector<string> strs32 = vector<string>{"same", "same", "same", "same"};
    string expected32 = "same";

    // Test Case 34
    vector<string> strs33 = vector<string>{"abcdef", "abcde", "abcd", "abc", "ab", "a"};
    string expected33 = "a";

    // Test Case 35
    vector<string> strs34 = vector<string>{"short", "small", "shallow", "shrink"};
    string expected34 = "s";

    // Test Case 36
    vector<string> strs35 = vector<string>{"zebra", "zoo", "zenith", "zest", "zone", "zephyr"};
    string expected35 = "z";

    // Test Case 37
    vector<string> strs36 = vector<string>{"multidimensional", "multidimensionalities", "multidimensionally", "multidimensionalization"};
    string expected36 = "multidimensional";

    // Test Case 38
    vector<string> strs37 = vector<string>{"computation", "compute", "computer", "comedy"};
    string expected37 = "com";

    // Test Case 39
    vector<string> strs38 = vector<string>{"abcd", "ab", "a", "abcde"};
    string expected38 = "a";

    // Test Case 40
    vector<string> strs39 = vector<string>{"abcde", "abcdf", "abcde", "abcda", "abcde", "abcdf"};
    string expected39 = "abcd";

    // Test Case 41
    vector<string> strs40 = vector<string>{"zebra", "zoo", "zealot"};
    string expected40 = "z";

    // Test Case 42
    vector<string> strs41 = vector<string>{"abcd", "abcde", "ab", "a"};
    string expected41 = "a";

    // Test Case 43
    vector<string> strs42 = vector<string>{"microphone", "microwave", "microscope", "microbial"};
    string expected42 = "micro";

    // Test Case 44
    vector<string> strs43 = vector<string>{"longest", "long", "lonely"};
    string expected43 = "lon";

    // Test Case 45
    vector<string> strs44 = vector<string>{"prefix", "preprocessor", "prevent"};
    string expected44 = "pre";

    // Test Case 46
    vector<string> strs45 = vector<string>{"algorithm", "alert", "alibaba", "allied"};
    string expected45 = "al";

    // Test Case 47
    vector<string> strs46 = vector<string>{"unbelievable", "unbeliever", "unbelievably", "unbelievability"};
    string expected46 = "unbeliev";

    // Test Case 48
    vector<string> strs47 = vector<string>{"prefix", "preposition", "prevent", "premier"};
    string expected47 = "pre";

    // Test Case 49
    vector<string> strs48 = vector<string>{"prefix", "prefixes", "prefixation", "prefixed"};
    string expected48 = "prefix";

    // Test Case 50
    vector<string> strs49 = vector<string>{"same", "same", "same", "same", "same"};
    string expected49 = "same";

    // Test Case 51
    vector<string> strs50 = vector<string>{"optimization", "optimization", "optimized", "optimizer"};
    string expected50 = "optimiz";

    // Test Case 52
    vector<string> strs51 = vector<string>{"communication", "communicate", "commune", "communist"};
    string expected51 = "commun";

    // Test Case 53
    vector<string> strs52 = vector<string>{"a", "ab", "abc", "abcd", "abcde", "abcdef"};
    string expected52 = "a";

    // Test Case 54
    vector<string> strs53 = vector<string>{"algorithm", "algorithmically", "algebra", "allegro"};
    string expected53 = "al";

    // Test Case 55
    vector<string> strs54 = vector<string>{"common", "commotion", "communicate", "community"};
    string expected54 = "comm";

    // Test Case 56
    vector<string> strs55 = vector<string>{"flower", "flow", "flight", "flew", "flying", "flowing"};
    string expected55 = "fl";

    // Test Case 57
    vector<string> strs56 = vector<string>{"single", "singlehandedly", "singlemindedness", "singlehanded"};
    string expected56 = "single";

    // Test Case 58
    vector<string> strs57 = vector<string>{"algorithm", "algebra", "alaska"};
    string expected57 = "al";

    // Test Case 59
    vector<string> strs58 = vector<string>{"congratulations", "congruity", "congruent"};
    string expected58 = "congr";

    // Test Case 60
    vector<string> strs59 = vector<string>{"a", "ab", "abc", "abcd"};
    string expected59 = "a";

    // Test Case 61
    vector<string> strs60 = vector<string>{"algorithm", "algorithmic", "algorithmically", "algorithmically"};
    string expected60 = "algorithm";

    // Test Case 62
    vector<string> strs61 = vector<string>{"preference", "prefix", "prevent", "prey"};
    string expected61 = "pre";

    // Test Case 63
    vector<string> strs62 = vector<string>{"abracadabra", "abracadabras", "abracadabaster", "abracadabration"};
    string expected62 = "abracadab";

    // Test Case 64
    vector<string> strs63 = vector<string>{"supercalifragilisticexpialidocious", "super", "supersonic"};
    string expected63 = "super";

    // Test Case 65
    vector<string> strs64 = vector<string>{"unanimity", "unanimous", "unanimously", "unanimated"};
    string expected64 = "unanim";

    // Test Case 66
    vector<string> strs65 = vector<string>{"orthogonal", "orthodox", "orthopedic", "orthography"};
    string expected65 = "ortho";

    // Test Case 67
    vector<string> strs66 = vector<string>{"abcd", "abcde", "abcdef", "abcdefg"};
    string expected66 = "abcd";

    // Test Case 68
    vector<string> strs67 = vector<string>{"programming", "programmer", "programmatic", "program"};
    string expected67 = "program";

    // Test Case 69
    vector<string> strs68 = vector<string>{"sequential", "sequence", "sequent", "sequel"};
    string expected68 = "seque";

    // Test Case 70
    vector<string> strs69 = vector<string>{"abracadabra", "abr", "abracadabrador", "abrac"};
    string expected69 = "abr";

    // Test Case 71
    vector<string> strs70 = vector<string>{"consistent", "consistency", "consistently", "consist"};
    string expected70 = "consist";

    // Test Case 72
    vector<string> strs71 = vector<string>{"common", "community", "comma", "communist"};
    string expected71 = "comm";

    // Test Case 73
    vector<string> strs72 = vector<string>{"zebra", "zoo", "zealot", "zest"};
    string expected72 = "z";

    // Test Case 74
    vector<string> strs73 = vector<string>{"a", "a", "a", "a", "a"};
    string expected73 = "a";

    // Test Case 75
    vector<string> strs74 = vector<string>{"algorithm", "algebra", "altitude", "altimeter"};
    string expected74 = "al";

    // Test Case 76
    vector<string> strs75 = vector<string>{"supercalifragilisticexpialidocious", "super", "supercal"};
    string expected75 = "super";

    // Test Case 77
    vector<string> strs76 = vector<string>{"maximum", "maximize", "maximal"};
    string expected76 = "maxim";

    // Test Case 78
    vector<string> strs77 = vector<string>{"complex", "complicated", "complect", "complete"};
    string expected77 = "compl";

    // Test Case 79
    vector<string> strs78 = vector<string>{"prefix", "pre", "preface", "prefer", "preference", "prefixing"};
    string expected78 = "pre";

    // Test Case 80
    vector<string> strs79 = vector<string>{"abcd", "abcde", "abcdef", "abcdefg", "abcdefgh", "abcdefghi"};
    string expected79 = "abcd";

    // Test Case 81
    vector<string> strs80 = vector<string>{"abcdefghij", "abcdefgh", "abcdefg", "abcdef", "abcde", "abcd", "abc", "ab", "a"};
    string expected80 = "a";

    // Test Case 82
    vector<string> strs81 = vector<string>{"abcde", "abcde", "abcde", "abcde"};
    string expected81 = "abcde";

    // Test Case 83
    vector<string> strs82 = vector<string>{"algorithm", "algorhythm", "algae"};
    string expected82 = "alg";

    // Test Case 84
    vector<string> strs83 = vector<string>{"xylophone", "xylography", "xylogen", "xylophonist"};
    string expected83 = "xylo";

    // Test Case 85
    vector<string> strs84 = vector<string>{"onomatopoeia", "onomatopoetic", "onomatope", "onomatologist"};
    string expected84 = "onomato";

    // Test Case 86
    vector<string> strs85 = vector<string>{"rehabilitation", "rehabilitate", "rehabilitative", "rehabilitated"};
    string expected85 = "rehabilitat";

    // Test Case 87
    vector<string> strs86 = vector<string>{"mississippi", "missile", "mission", "missive"};
    string expected86 = "missi";

    // Test Case 88
    vector<string> strs87 = vector<string>{"longest", "longevity", "longitudinal"};
    string expected87 = "long";

    // Test Case 89
    vector<string> strs88 = vector<string>{"psychological", "psychologist", "psychology", "psychic"};
    string expected88 = "psych";

    // Test Case 90
    vector<string> strs89 = vector<string>{"environment", "envelope", "envoy", "evening"};
    string expected89 = "e";

    // Test Case 91
    vector<string> strs90 = vector<string>{"short", "shorthand", "shortfall"};
    string expected90 = "short";

    // Test Case 92
    vector<string> strs91 = vector<string>{"parallel", "parallelogram", "parallactic", "paralactic"};
    string expected91 = "paral";

    // Test Case 93
    vector<string> strs92 = vector<string>{"cryptography", "cryptographic", "cryptanalysis", "cryptanalytic"};
    string expected92 = "crypt";

    // Test Case 94
    vector<string> strs93 = vector<string>{"zebra", "zoo", "zero", "zapper"};
    string expected93 = "z";

    // Test Case 95
    vector<string> strs94 = vector<string>{"singleword", "single", "singleton"};
    string expected94 = "single";

    // Test Case 96
    vector<string> strs95 = vector<string>{"anthropomorphic", "anthropologist", "anthropology", "anthropocentric"};
    string expected95 = "anthropo";

    // Test Case 97
    vector<string> strs96 = vector<string>{"a", "ab", "abc", "abcd", "abcde"};
    string expected96 = "a";

    // Test Case 98
    vector<string> strs97 = vector<string>{"common", "commune", "command", "community"};
    string expected97 = "comm";

    // Test Case 99
    vector<string> strs98 = vector<string>{"same", "samsung", "sample", "sand", "satellite", "saturn"};
    string expected98 = "sa";

    // Test Case 100
    vector<string> strs99 = vector<string>{"algorithm", "algebra", "altitude"};
    string expected99 = "al";

    // Test Case 101
    vector<string> strs100 = vector<string>{"implementation", "implement", "implementing", "implementor"};
    string expected100 = "implement";

    // Test Case 102
    vector<string> strs101 = vector<string>{"abracadabra", "abracadabra", "abracadabra"};
    string expected101 = "abracadabra";

    // Test Case 103
    vector<string> strs102 = vector<string>{"reorganization", "reorganize", "reorganized", "reorganizing"};
    string expected102 = "reorganiz";

    // Test Case 104
    vector<string> strs103 = vector<string>{"university", "universe", "unique", "unicorn"};
    string expected103 = "uni";

    // Test Case 105
    vector<string> strs104 = vector<string>{"environment", "envy", "envelop", "enviable"};
    string expected104 = "env";

    // Test Case 106
    vector<string> strs105 = vector<string>{"unique", "unicorn", "unify", "unity"};
    string expected105 = "uni";

    // Test Case 107
    vector<string> strs106 = vector<string>{"aabbcc", "aabbc", "aabb", "aab", "aa"};
    string expected106 = "aa";

    // Test Case 108
    vector<string> strs107 = vector<string>{"zebra", "zoo", "zeal", "zither"};
    string expected107 = "z";

    // Test Case 109
    vector<string> strs108 = vector<string>{"aardvark", "aardwolf", "aardvark", "aard"};
    string expected108 = "aard";

    // Test Case 110
    vector<string> strs109 = vector<string>{"zzzzzzzz", "zzzzz", "zzzz", "zzz", "zz", "z"};
    string expected109 = "z";

    // Test Case 111
    vector<string> strs110 = vector<string>{"separation", "separately", "separated", "separating"};
    string expected110 = "separat";

    // Test Case 112
    vector<string> strs111 = vector<string>{"mississippi", "missile", "mission", "miss"};
    string expected111 = "miss";

    // Test Case 113
    vector<string> strs112 = vector<string>{"algorithm", "algebra", "alien", "alert"};
    string expected112 = "al";

    // Test Case 114
    vector<string> strs113 = vector<string>{"commonality", "common", "commune", "community", "communicate", "commemorative"};
    string expected113 = "comm";

    // Test Case 115
    vector<string> strs114 = vector<string>{"supercalifragilisticexpialidocious", "supercalifragilistic", "supercalifragili", "super"};
    string expected114 = "super";

    // Test Case 116
    vector<string> strs115 = vector<string>{"parallel", "parallelepiped", "paralleled", "paralegal"};
    string expected115 = "paral";

    // Test Case 117
    vector<string> strs116 = vector<string>{"prefix", "preference", "presentation"};
    string expected116 = "pre";

    // Test Case 118
    vector<string> strs117 = vector<string>{"unified", "uniform", "universe", "unique"};
    string expected117 = "uni";

    // Test Case 119
    vector<string> strs118 = vector<string>{"anagram", "anagrams", "anagrammatic", "anagrammatical"};
    string expected118 = "anagram";

    // Test Case 120
    vector<string> strs119 = vector<string>{"environment", "environmental", "environments", "environmentally"};
    string expected119 = "environment";

    // Test Case 121
    vector<string> strs120 = vector<string>{"xylophone", "xylography", "xylophonist", "xylophonics"};
    string expected120 = "xylo";

    // Test Case 122
    vector<string> strs121 = vector<string>{"algorithm", "algebra", "altimeter"};
    string expected121 = "al";

    // Test Case 123
    vector<string> strs122 = vector<string>{"recognition", "recognizable", "recognize", "recognizably"};
    string expected122 = "recogni";

    // Test Case 124
    vector<string> strs123 = vector<string>{"prefix", "preposition", "presentation"};
    string expected123 = "pre";

    // Test Case 125
    vector<string> strs124 = vector<string>{"challenges", "challenging", "challenge", "challengingly"};
    string expected124 = "challeng";

    // Test Case 126
    vector<string> strs125 = vector<string>{"universally", "universe", "universal", "universality", "universes", "universally"};
    string expected125 = "univers";

    // Test Case 127
    vector<string> strs126 = vector<string>{"mississippi", "missile", "missionary", "misspell"};
    string expected126 = "miss";

    // Test Case 128
    vector<string> strs127 = vector<string>{"photosynthesis", "photosynthetic", "photosynthesize", "photosynthetically"};
    string expected127 = "photosynthe";

    // Test Case 129
    vector<string> strs128 = vector<string>{"apple", "apply", "appetite", "apparatus"};
    string expected128 = "app";

    // Test Case 130
    vector<string> strs129 = vector<string>{"prefix", "pretext", "prevent"};
    string expected129 = "pre";

    // Test Case 131
    vector<string> strs130 = vector<string>{"development", "develop", "developer", "developmental", "developing", "devel"};
    string expected130 = "devel";

    // Test Case 132
    vector<string> strs131 = vector<string>{"prefix", "preference", "presentation", "president", "pressure", "premier"};
    string expected131 = "pre";

    // Test Case 133
    vector<string> strs132 = vector<string>{"complex", "complicated", "completion"};
    string expected132 = "compl";
    // Auto-generated test cases:
    LeetCodeTestHarness::assertEqual(expected0, solution.longestCommonPrefix(strs0), 0);

    LeetCodeTestHarness::assertEqual(expected1, solution.longestCommonPrefix(strs1), 1);

    LeetCodeTestHarness::assertEqual(expected2, solution.longestCommonPrefix(strs2), 2);

    LeetCodeTestHarness::assertEqual(expected3, solution.longestCommonPrefix(strs3), 3);

    LeetCodeTestHarness::assertEqual(expected4, solution.longestCommonPrefix(strs4), 4);

    LeetCodeTestHarness::assertEqual(expected5, solution.longestCommonPrefix(strs5), 5);

    LeetCodeTestHarness::assertEqual(expected6, solution.longestCommonPrefix(strs6), 6);

    LeetCodeTestHarness::assertEqual(expected7, solution.longestCommonPrefix(strs7), 7);

    LeetCodeTestHarness::assertEqual(expected8, solution.longestCommonPrefix(strs8), 8);

    LeetCodeTestHarness::assertEqual(expected9, solution.longestCommonPrefix(strs9), 9);

    LeetCodeTestHarness::assertEqual(expected10, solution.longestCommonPrefix(strs10), 10);

    LeetCodeTestHarness::assertEqual(expected11, solution.longestCommonPrefix(strs11), 11);

    LeetCodeTestHarness::assertEqual(expected12, solution.longestCommonPrefix(strs12), 12);

    LeetCodeTestHarness::assertEqual(expected13, solution.longestCommonPrefix(strs13), 13);

    LeetCodeTestHarness::assertEqual(expected14, solution.longestCommonPrefix(strs14), 14);

    LeetCodeTestHarness::assertEqual(expected15, solution.longestCommonPrefix(strs15), 15);

    LeetCodeTestHarness::assertEqual(expected16, solution.longestCommonPrefix(strs16), 16);

    LeetCodeTestHarness::assertEqual(expected17, solution.longestCommonPrefix(strs17), 17);

    LeetCodeTestHarness::assertEqual(expected18, solution.longestCommonPrefix(strs18), 18);

    LeetCodeTestHarness::assertEqual(expected19, solution.longestCommonPrefix(strs19), 19);

    LeetCodeTestHarness::assertEqual(expected20, solution.longestCommonPrefix(strs20), 20);

    LeetCodeTestHarness::assertEqual(expected21, solution.longestCommonPrefix(strs21), 21);

    LeetCodeTestHarness::assertEqual(expected22, solution.longestCommonPrefix(strs22), 22);

    LeetCodeTestHarness::assertEqual(expected23, solution.longestCommonPrefix(strs23), 23);

    LeetCodeTestHarness::assertEqual(expected24, solution.longestCommonPrefix(strs24), 24);

    LeetCodeTestHarness::assertEqual(expected25, solution.longestCommonPrefix(strs25), 25);

    LeetCodeTestHarness::assertEqual(expected26, solution.longestCommonPrefix(strs26), 26);

    LeetCodeTestHarness::assertEqual(expected27, solution.longestCommonPrefix(strs27), 27);

    LeetCodeTestHarness::assertEqual(expected28, solution.longestCommonPrefix(strs28), 28);

    LeetCodeTestHarness::assertEqual(expected29, solution.longestCommonPrefix(strs29), 29);

    LeetCodeTestHarness::assertEqual(expected30, solution.longestCommonPrefix(strs30), 30);

    LeetCodeTestHarness::assertEqual(expected31, solution.longestCommonPrefix(strs31), 31);

    LeetCodeTestHarness::assertEqual(expected32, solution.longestCommonPrefix(strs32), 32);

    LeetCodeTestHarness::assertEqual(expected33, solution.longestCommonPrefix(strs33), 33);

    LeetCodeTestHarness::assertEqual(expected34, solution.longestCommonPrefix(strs34), 34);

    LeetCodeTestHarness::assertEqual(expected35, solution.longestCommonPrefix(strs35), 35);

    LeetCodeTestHarness::assertEqual(expected36, solution.longestCommonPrefix(strs36), 36);

    LeetCodeTestHarness::assertEqual(expected37, solution.longestCommonPrefix(strs37), 37);

    LeetCodeTestHarness::assertEqual(expected38, solution.longestCommonPrefix(strs38), 38);

    LeetCodeTestHarness::assertEqual(expected39, solution.longestCommonPrefix(strs39), 39);

    LeetCodeTestHarness::assertEqual(expected40, solution.longestCommonPrefix(strs40), 40);

    LeetCodeTestHarness::assertEqual(expected41, solution.longestCommonPrefix(strs41), 41);

    LeetCodeTestHarness::assertEqual(expected42, solution.longestCommonPrefix(strs42), 42);

    LeetCodeTestHarness::assertEqual(expected43, solution.longestCommonPrefix(strs43), 43);

    LeetCodeTestHarness::assertEqual(expected44, solution.longestCommonPrefix(strs44), 44);

    LeetCodeTestHarness::assertEqual(expected45, solution.longestCommonPrefix(strs45), 45);

    LeetCodeTestHarness::assertEqual(expected46, solution.longestCommonPrefix(strs46), 46);

    LeetCodeTestHarness::assertEqual(expected47, solution.longestCommonPrefix(strs47), 47);

    LeetCodeTestHarness::assertEqual(expected48, solution.longestCommonPrefix(strs48), 48);

    LeetCodeTestHarness::assertEqual(expected49, solution.longestCommonPrefix(strs49), 49);

    LeetCodeTestHarness::assertEqual(expected50, solution.longestCommonPrefix(strs50), 50);

    LeetCodeTestHarness::assertEqual(expected51, solution.longestCommonPrefix(strs51), 51);

    LeetCodeTestHarness::assertEqual(expected52, solution.longestCommonPrefix(strs52), 52);

    LeetCodeTestHarness::assertEqual(expected53, solution.longestCommonPrefix(strs53), 53);

    LeetCodeTestHarness::assertEqual(expected54, solution.longestCommonPrefix(strs54), 54);

    LeetCodeTestHarness::assertEqual(expected55, solution.longestCommonPrefix(strs55), 55);

    LeetCodeTestHarness::assertEqual(expected56, solution.longestCommonPrefix(strs56), 56);

    LeetCodeTestHarness::assertEqual(expected57, solution.longestCommonPrefix(strs57), 57);

    LeetCodeTestHarness::assertEqual(expected58, solution.longestCommonPrefix(strs58), 58);

    LeetCodeTestHarness::assertEqual(expected59, solution.longestCommonPrefix(strs59), 59);

    LeetCodeTestHarness::assertEqual(expected60, solution.longestCommonPrefix(strs60), 60);

    LeetCodeTestHarness::assertEqual(expected61, solution.longestCommonPrefix(strs61), 61);

    LeetCodeTestHarness::assertEqual(expected62, solution.longestCommonPrefix(strs62), 62);

    LeetCodeTestHarness::assertEqual(expected63, solution.longestCommonPrefix(strs63), 63);

    LeetCodeTestHarness::assertEqual(expected64, solution.longestCommonPrefix(strs64), 64);

    LeetCodeTestHarness::assertEqual(expected65, solution.longestCommonPrefix(strs65), 65);

    LeetCodeTestHarness::assertEqual(expected66, solution.longestCommonPrefix(strs66), 66);

    LeetCodeTestHarness::assertEqual(expected67, solution.longestCommonPrefix(strs67), 67);

    LeetCodeTestHarness::assertEqual(expected68, solution.longestCommonPrefix(strs68), 68);

    LeetCodeTestHarness::assertEqual(expected69, solution.longestCommonPrefix(strs69), 69);

    LeetCodeTestHarness::assertEqual(expected70, solution.longestCommonPrefix(strs70), 70);

    LeetCodeTestHarness::assertEqual(expected71, solution.longestCommonPrefix(strs71), 71);

    LeetCodeTestHarness::assertEqual(expected72, solution.longestCommonPrefix(strs72), 72);

    LeetCodeTestHarness::assertEqual(expected73, solution.longestCommonPrefix(strs73), 73);

    LeetCodeTestHarness::assertEqual(expected74, solution.longestCommonPrefix(strs74), 74);

    LeetCodeTestHarness::assertEqual(expected75, solution.longestCommonPrefix(strs75), 75);

    LeetCodeTestHarness::assertEqual(expected76, solution.longestCommonPrefix(strs76), 76);

    LeetCodeTestHarness::assertEqual(expected77, solution.longestCommonPrefix(strs77), 77);

    LeetCodeTestHarness::assertEqual(expected78, solution.longestCommonPrefix(strs78), 78);

    LeetCodeTestHarness::assertEqual(expected79, solution.longestCommonPrefix(strs79), 79);

    LeetCodeTestHarness::assertEqual(expected80, solution.longestCommonPrefix(strs80), 80);

    LeetCodeTestHarness::assertEqual(expected81, solution.longestCommonPrefix(strs81), 81);

    LeetCodeTestHarness::assertEqual(expected82, solution.longestCommonPrefix(strs82), 82);

    LeetCodeTestHarness::assertEqual(expected83, solution.longestCommonPrefix(strs83), 83);

    LeetCodeTestHarness::assertEqual(expected84, solution.longestCommonPrefix(strs84), 84);

    LeetCodeTestHarness::assertEqual(expected85, solution.longestCommonPrefix(strs85), 85);

    LeetCodeTestHarness::assertEqual(expected86, solution.longestCommonPrefix(strs86), 86);

    LeetCodeTestHarness::assertEqual(expected87, solution.longestCommonPrefix(strs87), 87);

    LeetCodeTestHarness::assertEqual(expected88, solution.longestCommonPrefix(strs88), 88);

    LeetCodeTestHarness::assertEqual(expected89, solution.longestCommonPrefix(strs89), 89);

    LeetCodeTestHarness::assertEqual(expected90, solution.longestCommonPrefix(strs90), 90);

    LeetCodeTestHarness::assertEqual(expected91, solution.longestCommonPrefix(strs91), 91);

    LeetCodeTestHarness::assertEqual(expected92, solution.longestCommonPrefix(strs92), 92);

    LeetCodeTestHarness::assertEqual(expected93, solution.longestCommonPrefix(strs93), 93);

    LeetCodeTestHarness::assertEqual(expected94, solution.longestCommonPrefix(strs94), 94);

    LeetCodeTestHarness::assertEqual(expected95, solution.longestCommonPrefix(strs95), 95);

    LeetCodeTestHarness::assertEqual(expected96, solution.longestCommonPrefix(strs96), 96);

    LeetCodeTestHarness::assertEqual(expected97, solution.longestCommonPrefix(strs97), 97);

    LeetCodeTestHarness::assertEqual(expected98, solution.longestCommonPrefix(strs98), 98);

    LeetCodeTestHarness::assertEqual(expected99, solution.longestCommonPrefix(strs99), 99);

    LeetCodeTestHarness::assertEqual(expected100, solution.longestCommonPrefix(strs100), 100);

    LeetCodeTestHarness::assertEqual(expected101, solution.longestCommonPrefix(strs101), 101);

    LeetCodeTestHarness::assertEqual(expected102, solution.longestCommonPrefix(strs102), 102);

    LeetCodeTestHarness::assertEqual(expected103, solution.longestCommonPrefix(strs103), 103);

    LeetCodeTestHarness::assertEqual(expected104, solution.longestCommonPrefix(strs104), 104);

    LeetCodeTestHarness::assertEqual(expected105, solution.longestCommonPrefix(strs105), 105);

    LeetCodeTestHarness::assertEqual(expected106, solution.longestCommonPrefix(strs106), 106);

    LeetCodeTestHarness::assertEqual(expected107, solution.longestCommonPrefix(strs107), 107);

    LeetCodeTestHarness::assertEqual(expected108, solution.longestCommonPrefix(strs108), 108);

    LeetCodeTestHarness::assertEqual(expected109, solution.longestCommonPrefix(strs109), 109);

    LeetCodeTestHarness::assertEqual(expected110, solution.longestCommonPrefix(strs110), 110);

    LeetCodeTestHarness::assertEqual(expected111, solution.longestCommonPrefix(strs111), 111);

    LeetCodeTestHarness::assertEqual(expected112, solution.longestCommonPrefix(strs112), 112);

    LeetCodeTestHarness::assertEqual(expected113, solution.longestCommonPrefix(strs113), 113);

    LeetCodeTestHarness::assertEqual(expected114, solution.longestCommonPrefix(strs114), 114);

    LeetCodeTestHarness::assertEqual(expected115, solution.longestCommonPrefix(strs115), 115);

    LeetCodeTestHarness::assertEqual(expected116, solution.longestCommonPrefix(strs116), 116);

    LeetCodeTestHarness::assertEqual(expected117, solution.longestCommonPrefix(strs117), 117);

    LeetCodeTestHarness::assertEqual(expected118, solution.longestCommonPrefix(strs118), 118);

    LeetCodeTestHarness::assertEqual(expected119, solution.longestCommonPrefix(strs119), 119);

    LeetCodeTestHarness::assertEqual(expected120, solution.longestCommonPrefix(strs120), 120);

    LeetCodeTestHarness::assertEqual(expected121, solution.longestCommonPrefix(strs121), 121);

    LeetCodeTestHarness::assertEqual(expected122, solution.longestCommonPrefix(strs122), 122);

    LeetCodeTestHarness::assertEqual(expected123, solution.longestCommonPrefix(strs123), 123);

    LeetCodeTestHarness::assertEqual(expected124, solution.longestCommonPrefix(strs124), 124);

    LeetCodeTestHarness::assertEqual(expected125, solution.longestCommonPrefix(strs125), 125);

    LeetCodeTestHarness::assertEqual(expected126, solution.longestCommonPrefix(strs126), 126);

    LeetCodeTestHarness::assertEqual(expected127, solution.longestCommonPrefix(strs127), 127);

    LeetCodeTestHarness::assertEqual(expected128, solution.longestCommonPrefix(strs128), 128);

    LeetCodeTestHarness::assertEqual(expected129, solution.longestCommonPrefix(strs129), 129);

    LeetCodeTestHarness::assertEqual(expected130, solution.longestCommonPrefix(strs130), 130);

    LeetCodeTestHarness::assertEqual(expected131, solution.longestCommonPrefix(strs131), 131);

    LeetCodeTestHarness::assertEqual(expected132, solution.longestCommonPrefix(strs132), 132);

    std::cout << "All tests for Longest Common Prefix passed!" << std::endl;
    return 0;
}
