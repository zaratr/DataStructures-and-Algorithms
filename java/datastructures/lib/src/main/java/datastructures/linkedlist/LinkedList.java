package datastructures.linkedlist;

public class LinkedList<T> {
  protected Node head;
  protected Node tail;

  //Constructor
  public LinkedList()
  {
    this.head = null;
  }
  public LinkedList(Node<T> newHead)
  {
    this.head = newHead;
  }
  public LinkedList(T data)
  {
    this.head = new Node(data);
  }


  public Node<T> getList(){
    return head;
  }
  /*insert at head*/
  public void insert(T data)
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

  public void insert2(T data){
      if(tail == null) tail = head;
      head = new Node(data, head);
  }


  public boolean includes(T toCmp)
  {
    Node current = head;
    while(current != null)
    {
      if(toCmp.equals(current.getData())){ return true;}
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

/**********  LAB6 **********/
  public void append(T data)
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

  public void insertBefore(T data, T newData)
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
      if(current.getData().equals(data))
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
  public void insertBefore2(T value, T target) throws Exception {
    if (head != null && head.getData().equals(target)) {
      insert(value);
      return;
    }
    //insertBefore2(head, value, target);
    _insertBefore(head, value, target);
    throw new Exception("target value not in list");
  }

  public void insertBefore2(Node<T> head, T value, T target) {
    Node<T> current = head;
    while (current != null) {
      if (current.getNext().getData().equals(target)) {
        current.setNext(new Node(value, current.getNext()));
        return;
      }
      current = current.getNext();
    }
  }

  private void _insertBefore(Node<T> head, T value, T target) {
    if (head == null) return;
    if (head.getNext().getData().equals(target)) {
      head.setNext( new Node<>(value, head.getNext()));
      _insertBefore(head.getNext(), value, target);
    }
  }
  public void insertAfter(T data, T newData)
  {
    if(head == null)
    {
      head = new Node(newData);
      tail = head;
    }
    Node current = head;
    while(current != null)
    {
      if(current.getData().equals(data))
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
  public void _insertAfter(T value, T target){
    if(head == null) return;
    _insertAfter(head, value, target);
  }
  private void _insertAfter(Node<T> head, T value, T target){
    if(head == null) return;
    if(head.getData() == target)
      head.setNext(new Node<T>(value, head.getNext()));
    _insertAfter(head.getNext(), value, target);
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

public T kthFromEnd(int k) {
  if(head == null) return null;
  if(size() < k) return null;
  int stopCondition = size() - k;
  int i = 1; T output = null;
  Node<T> current = head;

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

/********* challenge 8 *******/
public LinkedList<T> zippylist(LinkedList<T> list)
{
    if(head == null)
    {
      this.head = list.head;
      return this;
    }
    else if(list.head == null)
      return new LinkedList<T>(head);

  Node<T> current1 = head;
  Node<T> current2 = list.head;
  if(current1.getNext() == null)
  {
    current1.setNext(current2);//if this head is same memory location as list.head then it wont work due to java referencing
    return new LinkedList<T>(current1);
  }

  while(current1!= null && current2 != null )
  {
    Node temp = current2;
    //if(current2 != null)
    current2 = current2.getNext();
    temp.setNext(current1.getNext());
    current1.setNext(temp);
    current1 = temp.getNext();

    //if(current1 != null)
      current1 = current1.getNext();

  }
  return new LinkedList<T>(current1);
}

public LinkedList<T> zippylist2(LinkedList<T> list) //Greedy Algorithm
{
  //Base Case
  if(head == null)
  {
    this.head = list.head;
    return this;
  }
  else if(list.head == null) return this;
  //else -> continue with code below.

  //local Declaration/Instantiation
  Node<T> newHead = new Node<>(),
    newCurr = newHead;//instantiation of new list
  Node<T> cur1 = head,
    cur2 = list.head;//using current for traversals on both lists


  /**
   * iteration loop - (T and T -> T, T and F -> F, F and T -> F, F and F -> F;
   * SideNote, Negation !(T and F) -> !T or !F -> T) - DeMorgan Theorem(Boolean Algebra)
   */
  while(!(cur1 == null || cur2 == null)) //Stopping condition
  {
    //Temporary Nodes as placeholders to be added onto newHead Node
    Node<T> tempOne = new Node(cur1.getData()); //[x] -> NULL
    Node<T> tempTwo = new Node(cur2.getData()); //[x] -> NULL

    //insert with no limitation to unsorted lists
    newCurr.setNext(tempOne);
    newCurr = newCurr.getNext();
    newCurr.setNext(tempTwo);
    newCurr = newCurr.getNext();
    /*
    {new headNode} -> ... -> {newCurr ptr} -> [append here] ->NULL;
    NOTE: could use append method predefined but must return void and arg should be a node instead.
    also append will traverse again
    */

    //traversal
    cur1 = cur1.getNext();
    cur2 = cur2.getNext();
  }

  //final cases
  if(cur2!=null) newCurr.setNext(cur2);//check if we can merge the rest
  else if(cur1 != null) newCurr.setNext(cur1);

  newHead = newHead.getNext();//need to go one more up with Java. because line 226
  //return new LinkedList(newHead);//returning a new list
  this.head = newHead;
  return this;
}

/********* challenge 8 *******/



}
