package linked.list;

public class LinkedList {
  Node head = null, tail = null;
  public LinkedList()
  {
    this.head = null;
  }
  public LinkedList(int data)
  {
    this.head = new Node(data);
  }


  public void insert(int data)
  {
    if(head == null)
    {
      head = new Node(data);
      return ;
    }
    Node temp = new Node(data);
    temp.setNext(head);
    tail = head;
    head = temp;
    return ;
  }


  public boolean includes(int toCmp)
  {
    Node current = head;
    while(current != null)
    {
      if(toCmp == current.getData()){ return true;}
      current = current.getNext();
    }
    return false;
  }


  @Override
  public String toString()
  {
    String toDisplay = "";
    Node current = head;
    while(current != null){
      toDisplay = toDisplay + "{" + current.getData() + "} -> ";
      current = current.getNext();
    }
    return toDisplay + "NULL";
  }

  public Node getList(){
    return head;
  }

}
