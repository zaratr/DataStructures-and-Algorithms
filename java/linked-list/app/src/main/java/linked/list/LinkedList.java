package linked.list;

public class LinkedList {
  Node head = null, tail = null;
  public LinkedList()
  {
    this.head = null;
  }
  public LinkedList(Node newHead)
  {
    this.head = newHead;
  }
  public LinkedList(int data)
  {
    this.head = new Node(data);
  }


  /* insert at head*/
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

/********* challenge 8 *******/
public LinkedList zippylist(LinkedList list)
{
    if(head == null)
    {
      this.head = list.head;
      return this;
    }
    else if(list.head == null)
      return new LinkedList(head);

  Node current1 = head;
  Node current2 = list.head;
  if(current1.getNext() == null)
  {
    current1.setNext(current2);//if this head is same memory location as list.head then it wont work due to java referencing
    return new LinkedList(current1);
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
  return new LinkedList(current1);
}

public LinkedList zippylist2(LinkedList list) //Greedy Algorithm
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
  Node newHead = new Node(),
    newCurr = newHead;//instantiation of new list
  Node cur1 = head,
    cur2 = list.head;//using current for traversals on both lists

  //iteration loop - (T and T -> T, T and F -> F, F and T -> F, F and F -> F;//
  // SideNote, Negation !(T and F) -> !T or !F -> T) - DeMorgan Theorem(Boolean Algebra)//
  while(!(cur1 == null || cur2 == null)) //Stopping condition
    //while(current1!= null && current2 != null )
  {
    //Temporary Nodes as placeholders to be added onto newHead Node
    Node tempOne = new Node(cur1.getData()); //[x] -> NULL
    Node tempTwo = new Node(cur2.getData()); //[x] -> NULL

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
