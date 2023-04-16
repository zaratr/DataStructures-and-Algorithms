package com.leetcode.questions.leetcode.editor.en;

public class Number_Line_Jumps {

        public static String kangaroo(int x1, int v1, int x2, int v2) {

            // if the kangaroos are already at the same spot, they will always meet
            if (x1 == x2) {
                return "YES";
            }

            // if one kangaroo is jumping at a faster rate than the other, they will never meet
            if (v1 < v2) {
                return "NO";
            }

            // check if the kangaroos will meet at any point in the future or not
            while (x1 < x2) {
                x1 += v1;
                x2 += v2;
                if (x1 == x2) {
                    return "YES";
                }
            }

            // if the kangaroos do not meet in the future, they will never meet
            return "NO";
        }

    }



