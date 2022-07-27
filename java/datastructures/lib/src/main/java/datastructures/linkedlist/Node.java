package datastructures.linkedlist;

public class Node<T> {
  private T data;
  private Node next;
  //constructors
  public Node(){}
  public Node(T data){
    this.data = data;
    //this.next = null;
  }
  public T getData()
  {
    return data;
  }
  public void setData(T data)
  {
    this.data = data;
    return;
  }

  public void setNext(Node newNext) {
    next = newNext;
  }

  public Node<T> getNext() {
    return next;
  }



}
