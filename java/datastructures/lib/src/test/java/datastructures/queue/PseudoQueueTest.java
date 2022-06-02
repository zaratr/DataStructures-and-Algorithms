package datastructures.queue;

import datastructures.linkedlist.LinkedList;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

public class PseudoQueueTest {

 @Test
 public void testEnqueue1()
 {

   PseudoQueue sut = new PseudoQueue();
   sut.enqueue(10);
   sut.enqueue(15);
   sut.enqueue(20);
   assertEquals(sut.peek(), 10);
 }

 @Test
  public void testDequeue()
 {
   PseudoQueue sut = new PseudoQueue();
   sut.enqueue(10);
   sut.enqueue(15);
   sut.enqueue(20);
   sut.dequeue();
   assertEquals(sut.toString(), "{20} -> {15} -> NULL");
   return;
 }

 @Test
  public void testDequeueAll()
 {
   PseudoQueue sut = new PseudoQueue();
   sut.enqueue(10);
   sut.enqueue(15);
   sut.enqueue(20);
   sut.dequeue();
   sut.dequeue();
   sut.dequeue();;
   assertEquals(sut.toString(), "NULL");
   return;

 }

}
