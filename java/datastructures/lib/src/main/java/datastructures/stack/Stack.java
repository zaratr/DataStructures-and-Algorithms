package datastructures.stack;

import datastructures.linkedlist.LinkedList;
import datastructures.linkedlist.Node;

public class Stack {
  Node head, tail;

  public Stack()
  {
    this.head = null;
    this.tail = null;
  }


  public void push(int data)
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

  public int pop()
  {
    if(head == null) return 0;
    Node current = head;
    while(current != null)
    {
      if(current.getNext() == tail)
      {
        int temp = tail.getData();
        tail = current;
        current.setNext(null);
        return temp;
      }
      if(current.getNext() == null)
      {
        int temp = head.getData();
        head = tail = null;
        return temp;
      }
      current = current.getNext();
    }
    return 0;

  }


  public int peek() throws NullPointerException
  {

    try {
      return tail.getData();
    }
    catch (NullPointerException e)
    {
      e.printStackTrace();
      System.exit(-1);
    }

    return 0;
  }

  public boolean isEmpty()
  {
    if(head == null) return true;
    return false;
  }
}
