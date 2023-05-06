/*
 * This Java source file was generated by the Gradle 'init' task.
 */
package datastructures.linkedlist;

import org.junit.jupiter.api.Test;


import static org.junit.jupiter.api.Assertions.*;

class LinkedListTest {
  int[] test1 = new int[]{1};
  int[] test2 = new int[]{1, 2};
  int[] test3 = new int[]{1, 2, 3};

  @Test
  public void testEmpty() {
    LinkedList sut = new LinkedList();
    assertTrue(sut.getList() == null, "should be true");
  }

  @Test
  public void testInsert() {
    LinkedList<Integer> sut = new LinkedList();
    sut.insert(test1[0]);
    assert (sut.getList().getData() == 1);
  }
  @Test
  public void testInsert2() {
    LinkedList<Integer> sut = new LinkedList();
    sut.insert2(test1[0]);
    assert (sut.getList().getData() == 1);
  }

  @Test
  public void testHead() {
    LinkedList<Integer> sut = new LinkedList();
    int i = 0;

    while (i < test2.length) {
      sut.insert(test2[i]);
      ++i;
    }
    assert (sut.getList().getData() == 2);
  }


  @Test
  public void testTail() {
    LinkedList<Integer> sut = new LinkedList();
    int i = 0;

    while (i < test2.length) {
      sut.insert(test2[i]);
      ++i;
    }
    assert (sut.getList().getNext().getData() == 1);
  }

  @Test
  public void trueTestIncludes() {
    LinkedList sut = new LinkedList();
    int i = 0;
    while (i < test3.length) {
      sut.insert(test3[i]);
      ++i;
    }
    //assert(sut.includes(2));
    assertTrue(sut.includes(2), "assert 2 exists");
  }

  @Test
  public void falseTestIncludes() {
    LinkedList sut = new LinkedList();
    int i = 0;
    while (i < test3.length) {
      sut.insert(test3[i]);
      ++i;
    }

    assertTrue(!sut.includes(5), "assert 5 exists");
    return;
  }

  @Test
  public void testDisplay() {
    LinkedList sut = new LinkedList();
    int i = 0;
    while (i < test3.length) {
      sut.insert(test3[i]);
      ++i;
    }
    assert (sut.toString().equals("{3} -> {2} -> {1} -> NULL"));
  }

  @Test
  public void testAppend() {
    LinkedList list = new LinkedList();
    list.append(12);
    list.append(1);
    assert (list.toString().equals("{12} -> {1} -> NULL"));
  }

  @Test
  public void testAppendInit() {
    LinkedList list = new LinkedList();
    list.append(12);
    assert (list.toString().equals("{12} -> NULL"));
  }

  @Test
  public void testInsertBefore() {
    LinkedList list = new LinkedList();
    list.append(12);
    list.append(1);
    list.insertBefore(1, 14);
    assert (list.toString().equals("{12} -> {14} -> {1} -> NULL"));
    return;
  }

  @Test
  public void testInsertAfter() {
    LinkedList list = new LinkedList();
    list.append(12);
    list.append(1);
    list.insertAfter(1, 14);
    assert (list.toString().equals("{12} -> {1} -> {14} -> NULL"));
    return;
  }

  @Test
  public void testKthFromEnd() {
    int k = 0;
    LinkedList<Integer> list = new LinkedList(1);
    list.append(3);
    list.append(8);
    list.append(2);
    int x = list.kthFromEnd(k);
    LinkedList sut = new LinkedList(x);

    assert (sut.toString().equals("{2} -> NULL"));
    return;
  }

  @Test
  public void testZiplink() {
    LinkedList list1 = new LinkedList(1);
    list1.append(3);
    list1.append(2);

    LinkedList list2 = new LinkedList(5);
    list2.append(9);
    list2.append(4);

    LinkedList sut = list1.zippylist2(list2);//returns a new list but can be refactored return true or false
    assertEquals(sut.toString(), "{1} -> {5} -> {3} -> {9} -> {2} -> {4} -> NULL");
    return;
  }

  @Test
  public void testListWithOne() {
    LinkedList list1 = new LinkedList(1);
    LinkedList list2 = new LinkedList(5);
    list2.append(9);
    list2.append(4);

    LinkedList sut = list1.zippylist2(list2);//returns a new list but can be refactored return true or false

    LinkedList list3 = new LinkedList(1);
    LinkedList list4 = new LinkedList(5);
    list3.append(9);
    list3.append(4);

    LinkedList sut1 = list3.zippylist2(list4);//returns a new list but can be refactored return true or false


    assertEquals(sut.toString(), "{1} -> {5} -> {9} -> {4} -> NULL");
    assertEquals(sut1.toString(), "{1} -> {5} -> {9} -> {4} -> NULL");
    return;
  }

  @Test
  public void testZipBase() {
    LinkedList list1 = new LinkedList(1);
    LinkedList list2 = new LinkedList();
    list1.zippylist2(list2);
    list1.zippylist(list2);

    LinkedList list3 = new LinkedList();
    LinkedList list4 = new LinkedList(1);
    list3.zippylist2(list4);
    //list3.ziplist(list4);

    assertEquals(list1.toString(), "{1} -> NULL");
    assertEquals(list3.toString(), "{1} -> NULL");
    return;
  }

  @Test
  public void testZipifOne() {
    LinkedList list1 = new LinkedList(1);

    LinkedList list2 = new LinkedList(5);
    //change the list2 to list1 to test one node
    list2.append(4);
    list2.append(7);

    LinkedList sut = list1.zippylist(list2);//returns a new list but can be refactored return true or false
    assertEquals(sut.toString(), "{1} -> {5} -> {4} -> {7} -> NULL");
    return;
  }

}
