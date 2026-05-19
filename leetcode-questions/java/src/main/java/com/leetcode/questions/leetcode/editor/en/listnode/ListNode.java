package com.leetcode.questions.leetcode.editor.en.listnode;

/**
 * ListNode is a class that references itself as next. Thus, every next initially is null until specified.
 * For Code Challenges, I made all Public but getters and mutators should be used by setting all fields private/protected.
 * Further, no Generics was used for this as the leetcode challenge didn't specify
 * @see ListNode#val
 * @see ListNode#next
 **/
public class ListNode {
  public int val;
  public ListNode next;

  ListNode() {
  }

  public ListNode(int val) {
    this.val = val;
  }

  public ListNode(int val, ListNode next) {
    this.val = val;
    this.next = next;
  }
@Override
  public String toString(){
    return this.next == null? "[" + val + "]" + " -> null" : "[" + val + "] -> ";
  }

}
