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
  public void testQueueEnqueue()
  {
    Queue sut = new Queue();
    sut.enqueue(6);
    sut.enqueue(4);

    assertEquals(sut.peek(), 4);
  }

  @Test
  public void testQueueDequeue()
  {
    Queue sut = new  Queue();

    sut.enqueue(2);
    sut.enqueue(3);

    assertEquals(sut.dequeue(), 2);
    return;
  }

  @Test void testPeekQueue()
  {
    Queue sut = new Queue();

    sut.enqueue(2);
    sut.enqueue(3);

    sut.dequeue();

    sut.enqueue(2);
    sut.enqueue(3);

    int x  = sut.peek();
    assertEquals(x, 3);
    return;
  }
}
