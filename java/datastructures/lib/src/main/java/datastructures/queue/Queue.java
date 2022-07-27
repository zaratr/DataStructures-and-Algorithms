package datastructures.queue;

import datastructures.linkedlist.Node;

public class Queue {

  private Node<Integer> rear, front;

  //NOTE: head = rear, tail = front
  public Node getRear()
  {
    return rear;
  }
  public Queue()
  {
    rear = null;
    front = null;
  }
  public void enqueue(int data)
  {
    if(rear == null)
    {
      rear = new Node(data);
      front = rear;
      return;
    }
    Node current = rear;
    while(current != null)
    {
      if(current.getNext() == null)
      {
        Node temp = new Node(data);
        temp.setNext(current.getNext());
        current.setNext(temp);
        front = temp;
        //temp = rear;
        break;
      }
      current = current.getNext();
    }
    return;

  }

  public int dequeue() throws NullPointerException
  {
    if(rear == null)
    {
      throw new NullPointerException("Queue is empty");
    }
    int x = rear.getData();
    rear = rear.getNext();
    if(rear == null)
    {
      front = rear;
    }
    return x;
  }

  public int peek() throws NullPointerException
  {
      if(rear == null)
        throw new NullPointerException("Queue is empty");
      return front.getData();
    }

  public boolean isEmpty() {
    return rear == null? true:false;
  }

  @Override
  public String toString()
  {
    String toDisplay = "";
    Node current = rear;
    while(current != null){
      toDisplay = toDisplay + "{" + current.getData() + "} -> ";
      current = current.getNext();
    }
    return toDisplay + "NULL";
  }

}
