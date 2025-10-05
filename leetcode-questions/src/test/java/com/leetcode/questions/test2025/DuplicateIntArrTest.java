package com.leetcode.questions.test2025;

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import com.leetcode.questions.leetcode.editor.en.DuplicateIntArr;
import java.util.Arrays;

public class DuplicateIntArrTest{
	public int[] arr;

	@Test public void  test1(){
		DuplicateIntArr dup = new DuplicateIntArr();
		this.arr = new int[]{1,2,3,4};
		Boolean expected = false;
		Boolean actual = dup.getMethod(this.arr);
		assertEquals(expected, actual);

	}

	@Test public void  test2(){
		DuplicateIntArr dup = new DuplicateIntArr();
		this.arr = new int[]{1,2,3,1};
		Boolean expected = true;
		Boolean actual = dup.getMethod(this.arr);
		assertEquals(expected, actual);

	}

}
