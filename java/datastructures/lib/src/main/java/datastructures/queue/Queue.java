package datastructures.queue;

import datastructures.linkedlist.Node;

public class Queue {

  private Node head, tail;
  public Node getHead()
  {
    return head;
  }
  public Queue()
  {
    head = null;
    tail = null;
  }
  public void enqueue(int data)
  {
    if(head == null)
    {
      head = new Node(data);
      tail = head;
      return;
    }
    Node current = head;
    while(current != null)
    {
      if(current.getNext() == null)
      {
        Node temp = new Node(data);
        temp.setNext(current.getNext());
        current.setNext(temp);
        tail = temp;
        //temp = head;
        break;
      }
      current = current.getNext();
    }
    return;

  }

  public int dequeue()
  {
    if(head == null)
    {
      return 0;
    }
    int x = head.getData();
    head = head.getNext();
    if(head == null)
    {
      tail = head;
    }
    return x;
  }

  public int peek() {
      if(head == null) return 0;
      return tail.getData();
    }

  public boolean isEmpty() {
    if(head == null) return true;
    return false;
  }
}
