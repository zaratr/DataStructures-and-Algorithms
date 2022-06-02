package datastructures.queue;

import datastructures.linkedlist.Node;
import datastructures.stack.Stack;

public class PseudoQueue {
  public Stack t1,
    t2;

  public PseudoQueue() {
    this.t1 = new Stack();
    this.t2 = new Stack();
  }

  public PseudoQueue(int data) {
    this.t1 = new Stack(data);
    this.t2 = new Stack();
  }

  public void enqueue(int data) {
    if (t1.isEmpty()) {
      t1.push(data);
      return;
    }
    //Stack current = t1;
    while (!t1.isEmpty()) {
      t2.push(t1.pop());
    }
    t1.push(data);
    while (!t2.isEmpty()) {
      t1.push(t2.pop());
    }
    return;
  }

  public int dequeue() {
    if (t1.isEmpty()) return 0;
    return t1.pop();
  }

  public int peek() throws NullPointerException {
    if (t1.isEmpty())
      throw new NullPointerException("Queue is empty");
    return t1.peek();
  }

  @Override
  public String toString()
  {
    String toDisplay = "";
    return t1.toString();
  }
}
