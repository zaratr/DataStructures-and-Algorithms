package datastructures.tree;

import java.util.NoSuchElementException;

public class Queue<T>
{
  Node<T> front;
  Node<T> rear;

  public void enqueue(T value)
  {
    Node<T> newNode = new Node<>(value);
    if (front == null) {
      front = newNode;
      rear = newNode;
    } else {
      rear.setNext(newNode);
      rear =rear.getNext();
    }
  }

  public T dequeue()
  {
    Node<T> temp = front;
    front = front.getNext();
    temp.setNext(null);

    return temp.getData();
  }

  public T peek()
  {
    if (front == null){
      throw new NoSuchElementException("Queue is empty");
    }
    return front.getData();
  }


  public boolean isEmpty()
  {
    return ( front == null);
  }


  @Override
  public String toString() {
    Node<T> current = front;
    StringBuilder string = new StringBuilder();
    while(current != null){
      string.append("[");
      string.append(current.getData());
      string.append("]->");
      current = current.getNext();
    }
    string.append("NULL");
    return string.toString();
  }

  public Node<T> getFront() {
    return front;
  }

  public Node<T> getRear() {
    return rear;
  }
}
