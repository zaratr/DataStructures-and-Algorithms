package datastructures.stack;

import datastructures.linkedlist.LinkedList;
import datastructures.queue.Queue;
import org.junit.jupiter.api.*;
import static org.junit.jupiter.api.Assertions.*;


public class StackTest {

  @Test
  public void testStackPush()
  {
    Stack sut = new Stack();
    sut.push(6);
    assertEquals(sut.peek(), 6);
  }
  @Test
  public void  testStackisEmpty() {
    Stack sut = new Stack();
    sut.push(1);
    sut.push(2);
    sut.pop();
    sut.pop();
    assertTrue(sut.isEmpty());
  }
  @Test
  public void testStackPop()
  {
    Stack sut = new Stack();

    sut.push(2);
    sut.push(3);

    assertEquals(sut.pop(), 3);
  }

  @Test
  public void testStackPeek()
  {
    Stack sut = new Stack();
    sut.push(2);
    sut.push(3);

    assertEquals(sut.peek(), 3);
  }

  @Test
  public void testNullException() throws NullPointerException
  {
    Stack sut = new Stack();
    sut.push(2);
    sut.pop();
    assertThrows(NullPointerException.class, sut::pop);

  }



  }
