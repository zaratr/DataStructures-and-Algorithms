package datastructures.stack;

import datastructures.linkedlist.LinkedList;
import datastructures.linkedlist.Node;

public class Stack {
  public Node<Integer> top, topRemove;

  public Stack()
  {
    this.top = null;
    this.topRemove = null;
  }
  public Stack(int data)
  {
    this.top = new Node(data);
    this.topRemove = new Node(data);
  }


  public void push(int data)
  {
    if(top == null)
    {
      top = new Node(data);
      topRemove = top;
      return;
    }
    Node current = top;
    while(current != null)
    {
      if(current.getNext() == null)
      {
        Node temp = new Node(data);
        temp.setNext(current.getNext());
        current.setNext(temp);
        topRemove = temp;
        //temp = top;
        break;
      }
      current = current.getNext();
    }
    return;

  }

  public int pop() throws NullPointerException
  {
    if(top == null) throw new NullPointerException("Stack is empty");
    Node<Integer> current = top;
    while(current != null)
    {
      if(current.getNext() == topRemove)
      {
        int temp = topRemove.getData();
        topRemove = current;
        current.setNext(null);
        return temp;
      }
      if(current.getNext() == null)
      {
        int temp = top.getData();
        top = topRemove = null;
        return temp;
      }
      current = current.getNext();
    }
    return 0;

  }


  public int peek() throws NullPointerException
  {
    if(top == null)
    {
      throw new NullPointerException("Stack is empty");
    }
    return topRemove.getData();
  }

  public boolean isEmpty()
  {
    return top == null? true:false;
  }

  @Override
  public String toString()
  {
    String toDisplay = "";
    Node current = top;
    while(current != null)
    {
      toDisplay = toDisplay + "{" + current.getData() + "} -> ";
      current = current.getNext();
    }
    return toDisplay + "NULL";
  }
}
