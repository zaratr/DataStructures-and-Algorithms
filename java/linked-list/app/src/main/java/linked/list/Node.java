package linked.list;

public class Node {
  private int data;
  private Node next;
  //constructors
  public Node()
  {
    this.data = 0;
    this.next = null;
  }
  public Node(int data){
    this.data = data;
    //this.next = null;
  }
  public int getData()
  {
    return data;
  }
  public void setData(int data)
  {
    this.data = data;
    return;
  }

  public void setNext(Node newNext) {
    next = newNext;
  }

  public Node getNext() {
    return next;
  }

}
