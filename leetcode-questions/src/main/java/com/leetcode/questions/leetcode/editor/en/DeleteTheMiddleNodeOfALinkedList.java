package com.leetcode.questions.leetcode.editor.en;

import com.leetcode.questions.leetcode.editor.en.listnode.ListNode;
public class DeleteTheMiddleNodeOfALinkedList{

  /**
   * Constructor that takes in a ListNode and uses it for a Default class - DeleteMiddle. Leetcode plugin requires a class to pass on to variables.
   * @param head
   * @see DeleteTheMiddleNodeOfALinkedList#getResult
   * @see Solution#deleteMiddle(ListNode)
   */
  public DeleteTheMiddleNodeOfALinkedList(ListNode head){this.head = head; this.getResult = head;}
  public ListNode head;
  public ListNode getResult;
  public void main(){
    var solution = new Solution().
      deleteMiddle(head);
    this.getResult = solution;
  }


    //leetcode submit region begin(Prohibit modification and deletion)

class Solution {
    /**
   * deletes middle node from a chain of nodes. middle node is floor(n/2) | n = size of total listnodes
     * recursion makes this algo Time Complecity run O(N**2) and Space Complexity O(1).
     * to fix this scenerio, using For loop traversal with fast ListNode pointer will make this Time Complexity O(N) and space complexity O(1).
     * Further, by traversing first and finding the size to find floor(midddle) will also be O(2N) = O(N) an space complexity O(1)
   * @param head
   * @return {@code ListNode}
   */
  public ListNode deleteMiddle(ListNode head) {
        if(head == null) return null;
        if(head.next == null) return null; //floor(head) if only one node is the the one node. thus, delete the whole list.
        //var result = deleteMiddle(null, head, head, head);
        _deleteMiddle(head, head, head);
        return head;
    }


  /**
   * RECURSION Method: this will by default become O(N) multiplied by any traversal. thus, Worst Time Complexity is O(N**2).
   * @param slow {@code ListNode} traversal is dependant on second reference argument: {@code head}
   * @param head {@code ListNode} head pointer that serves as "middle" pointer between fast and slow.
   * @param fast {@code ListNode} traverses list n/2 where n is the length of the linked list
   * @return slow is returned, however, head is updated by reference for this assignment.
   */
    public ListNode _deleteMiddle(ListNode slow, ListNode head, ListNode fast)
    {
      if(fast == null || fast.next == null) {
        slow.next = slow.next.next;
        return slow;
      }
      return _deleteMiddle(head, head.next, fast.next.next);
    }
}
//leetcode submit region end(Prohibit modification and deletion)

  @Override
  public String toString(){
    if(head == null ) return null;
    return toStr(head, "");
  }
  public String toStr(ListNode head, String toDisplay){
    if(head == null) return toDisplay;
    return toStr(head.next, toDisplay + head.toString()) ;
  }

}

/**
You are given the head of a linked list. Delete the middle node, and return the
head of the modified linked list.

 The middle node of a linked list of size n is the ⌊n / 2⌋ᵗʰ node from the
start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or
equal to x.


 For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2,
respectively.



 Example 1:


Input: head = [1,3,4,7,1,2,6]
Output: [1,3,4,1,2,6]
Explanation:
The above figure represents the given linked list. The indices of the nodes are
written below.
Since n = 7, node 3 with value 7 is the middle node, which is marked in red.
We return the new list after removing this node.


 Example 2:


Input: head = [1,2,3,4]
Output: [1,2,4]
Explanation:
The above figure represents the given linked list.
For n = 4, node 2 with value 3 is the middle node, which is marked in red.


 Example 3:


Input: head = [2,1]
Output: [2]
Explanation:
The above figure represents the given linked list.
For n = 2, node 1 with value 1 is the middle node, which is marked in red.
Node 0 with value 2 is the only node remaining after removing node 1.


 Constraints:


*/
