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
        Node temp = tail;
        tail = current;
        current.setNext(null);
        return temp.getData();
      }
    }
    return 0;

  }


  public int peek()
  {
    if(head == null) return 0;
//    Node current= head;
//    while(current != null)
//    {
//      current = current.getNext();
//    }
    return tail.getData();
  }
}
