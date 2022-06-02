package datastructures.linkedlist;
public class Search extends LinkedList{

  public enum ALGORITHM {
    LINEAR,BINARY,JUMP,INTERPOLATION,EXPONENTIAL,SUBLIST,UBIQUITOUS,FIBONACCI,
  }
  public Search()
  {
    super();
  }

  public boolean wrapperSearchAlgorithm(final int isIterationOrRecursion, ALGORITHM TYPE, int find, int[] x)
  {
    boolean found = false;
    switch(isIterationOrRecursion)
    {
      case 1:
        switch(TYPE) {
          case LINEAR: found = linearSearch(find);//iteration
            break;
          case BINARY:
              if(binarySearch(find, x) != 0) found = true;
            break;
        }
        break;
      case 2:
        switch(TYPE) {
          case LINEAR: found = linearSearch(find, head);//recursion
            break;
          case BINARY: if(binarySearch(find, x[0], (x[0]+x.length)/2,x.length)!=0) found = true;
            break;
        }
        break;
      default: return found;
    }
    return found;
  }

  private boolean linearSearch(int toFind)
  {
    if(head == null) return false;
    Node current = head;

    while(current != null)
    {
      if(toFind == current.getData())
        return true;
      current = current.getNext();
    }
    return false;
  }
  private boolean linearSearch(int toFind, Node head)//recursion
  {
    if(head == null) return false;
    if(head.getData() == toFind) return true;

    return linearSearch(toFind, head.getNext());
  }

  private int binarySearch(int toFind, int []x)
  {

    return 0;
  }
  private int binarySearch(int toFind, int low, int mid, int high)
  {
    return 0;
  }



}
