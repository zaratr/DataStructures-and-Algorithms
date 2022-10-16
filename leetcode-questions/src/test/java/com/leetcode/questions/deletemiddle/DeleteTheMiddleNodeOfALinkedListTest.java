package com.leetcode.questions.deletemiddle;
import com.leetcode.questions.leetcode.editor.en.DeleteTheMiddleNodeOfALinkedList;
import com.leetcode.questions.leetcode.editor.en.listnode.ListNode;
import org.junit.jupiter.api.Test;

import java.util.*;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class DeleteTheMiddleNodeOfALinkedListTest {
  @Test
  public void testDeleteMiddle(){

    int[] list = new int[]{6, 2, 1, 7, 4, 3, 1};
    int middle = list.length/2;
    ListNode head = new ListNode(list[0]);
    ListNode expected = new ListNode(list[0]);
    for(int i = 0 ; i < list.length; ++i)
    {
      if(i != 0)
      {
        ListNode temp = new ListNode(list[i]);
        temp.next = head;
        head = temp;
        if(head.val != list[middle])
        {

          ListNode temp2 = new ListNode(list[i]);
          temp2.next = expected;
          expected = temp2;
        }
      }
    }
    DeleteTheMiddleNodeOfALinkedList sut = new DeleteTheMiddleNodeOfALinkedList(head);
    DeleteTheMiddleNodeOfALinkedList expect = new DeleteTheMiddleNodeOfALinkedList(expected);
    sut.main();
    assertEquals(sut.toString(), expect.toString());
    return;
  }
}
