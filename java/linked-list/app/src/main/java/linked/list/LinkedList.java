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
      tail = head;
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
/**********  LAB6 **********/
  public void append(int data)
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

  public void insertBefore(int data, int newData)
  {
    if(head == null)
    {
      head = new Node(newData);
      tail = head;
    }
    Node prev = head;
    Node current = head;
    while(current != null)
    {
      if(current.getData() == data)
      {
        Node temp = new Node(newData);
        temp.setNext(prev.getNext());
        prev.setNext(temp);
        break;
      }
      prev = current;
      current = current.getNext();
    }
    return ;
  }

  public void insertAfter(int data, int newData)
  {
    if(head == null)
    {
      head = new Node(newData);
      tail = head;
    }
    Node current = head;
    while(current != null)
    {
      if(current.getData() == data)
      {
        Node temp = new Node(newData);
        temp.setNext(current.getNext());
        current.setNext(temp);
        //temp = current;
        break;
      }
      current = current.getNext();
    }
    return ;
  }

/**********  LAB6 **********/

  /**********  LAB7 **********/
  public int size()
  {
    if(head == null) return 0;
    Node current = head;
    int num = 1;
    while(current.getNext() != null)
    {
      ++num;
      current = current.getNext();
    }
    return num;
  }

public int kthFromEnd(int k) {
  if(head == null) return 0;
  if(size() < k) return 0;
  int stopCondition = size() - k;
  int i = 1,output = 0;
  Node current = head;

  while(current != null )
  {
    if(stopCondition == i)
    {
      output = current.getData();
      break;
    }
    ++i;
    current = current.getNext();

  }
  return output;
}
/**********  LAB7 **********/

}
