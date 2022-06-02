package datastructures.queue;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

public class QueueTest {
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
  @Test
  public void  testDequeueEmpty()
  {
    Queue sut = new Queue();
    sut.enqueue(1);
    sut.dequeue();
    assertNull(sut.getRear());
  }

  @Test
  public void  testDequeueisEmpty() {
    Queue sut = new Queue();
    sut.enqueue(1);
    sut.dequeue();
    assertTrue(sut.isEmpty());
  }
  @Test
  public void testNull() throws NullPointerException
  {
    Queue sut = new Queue();
    sut.enqueue(1);
    sut.dequeue();
    assertThrows(NullPointerException.class, sut::dequeue);

  }
}
