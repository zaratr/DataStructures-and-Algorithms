package datastructures.tree;

//import datastructures.queue.Queue;

import java.util.*;
//import com.google.common.collect.*;

public class BinaryTree <T>{
  public Tnode<T> root;//accidently used this public. without refactoring, I kept as public
  public ArrayList<T> xList;
  private int max;
  private enum TYPE {PREORDER, INORDER, POSTORDER};
  private TYPE displayType;
  private ArrayList<T> results;
  //= new ArrayList<>();
  private Queue<Tnode<T>> queue;
  //= new Queue();
  public BinaryTree()
  {
    displayType = TYPE.PREORDER;
    xList = new ArrayList<>();
    root = new Tnode<>();
  }

  //wrapper
  public BinaryTree preOrder()
  {
    this.displayType = TYPE.PREORDER;
    preOrder(root);
    return this;
  }

  //wrapper
  public BinaryTree inOrder()
  {
    this.displayType = TYPE.INORDER;
    inOrder(root);
    return this;
  }

  //wrapper
  public BinaryTree postOrder()
  {
    this.displayType = TYPE.POSTORDER;
    postOrder(root);
    return this;
  }




  //recursion
  private void preOrder(Tnode<T> root)
  {
    xList.add(root.getData());
    if(root.getLeftNode() != null) preOrder(root.getLeftNode());
    if(root.getRightNode() != null) preOrder(root.getRightNode());
  }


  //recursion
  private void inOrder(Tnode<T> root)
  {
    if(root.getLeftNode() != null) inOrder(root.getLeftNode());
    xList.add(root.getData());
    if(root.getRightNode() != null) inOrder(root.getRightNode());

  }

  //recursion
  private void postOrder(Tnode<T> root)
  {
    if(root.getLeftNode() != null) postOrder(root.getLeftNode());
    if(root.getRightNode() != null) postOrder(root.getRightNode());
    xList.add(root.getData());
  }

  public boolean search(T target)
  {
    return search(root, target);
  }
  private boolean search(Tnode<T> root, T toFind)
  {
    if(root == null) return false;

    if(root.getData().equals(toFind)) return true;
    return search(root.getLeftNode(), toFind) ||
    search(root.getRightNode(), toFind);
  }

  @Override
  public String toString()
  {
    String toDisplay = "";
    //toDisplay = toStringPRE(root);
    TYPE toCheck;
    if(displayType.equals(TYPE.PREORDER))
        toDisplay = toStringPRE(root);

    else if(displayType.equals(TYPE.INORDER))
        toDisplay = toStringIN(root);

    else //displayType.equals(TYPE.POSTORDER)
        toDisplay = toStringPOST(root);

    return toDisplay + "NULL";
  }


  private String toStringPRE(Tnode<T> root)
  {
    if(root == null) return "";
    String toDisplay = "";
    toDisplay = toDisplay + "{" + root.getData() + "} -> ";
    toDisplay += toStringPRE(root.getLeftNode());
    toDisplay += toStringPRE(root.getRightNode());
    return toDisplay;

  }

  private String toStringIN(Tnode<T> root)
  {
    if(root == null) return "";
    String toDisplay = "";
    toDisplay += toStringIN(root.getLeftNode());
    toDisplay = toDisplay + "{" + root.getData() + "} -> ";
    toDisplay += toStringIN(root.getRightNode());
    return toDisplay;

  }

  private String toStringPOST(Tnode<T> root)
  {
    if(root == null) return "";
    String toDisplay = "";
    toDisplay += toStringPOST(root.getLeftNode());
    toDisplay += toStringPOST(root.getRightNode());
    toDisplay = toDisplay + "{" + root.getData() + "} -> ";
    return toDisplay;

  }

  public int maxValue()
  {
    max = 0;
    maxValue(root);
    return this.max;
  }
  private void maxValue(Tnode<T> root) {
    if(root == null) return ;
    max= 0;
    if((int)root.getData() >= max)
      this.max = (int)root.getData();
    maxValue(root.getLeftNode());
    maxValue(root.getRightNode());

  }

  /*
  List<List<Integer>> levels = new ArrayList<List<Integer>>();
  HashMap.java<Integer, List<Integer>> hashMap = new HashMap.java<>();
  List<Integer> x ;
  public void helper(Tnode<Integer> node, int level) {
    // start the current level
    if (levels.size() == level) {
      levels.add(new ArrayList<Integer>());
      x = new ArrayList<>();
    }

    // fulfil the current level
    levels.get(level).add(node.getData());
    x.add(node.getData());
    hashMap.put(level, x);

    // process child nodes for the next level
    if (node.getLeftNode() != null)
      helper(node.getLeftNode(), level + 1);
    if (node.getRightNode() != null)
      helper(node.getRightNode(), level + 1);
  }

   */

  public List<T> levelOrder(Tnode<T> root) {
    if (root == null) return null;
//    for(List<Integer> i: levels)
//    {
//      for(Integer j: i)
//      xList.add(j);
//    }
    queue = new Queue<>();
    queue.enqueue(root);
    //breadFirst();
    //helper(root, 0);
    breadFirstRecursion(new Tnode<T>(), false, new ArrayList<>());
    return xList;
  }

  public ArrayList<T> breadFirst() {

    queue = new Queue<>();
    results = new ArrayList<>();
    Tnode<T> first;
    while (!queue.isEmpty()) {
      first = queue.dequeue();
      results.add(first.getData());

      if (first.getLeftNode() != null)
        queue.enqueue(first.getLeftNode());
      if (first.getRightNode() != null)
        queue.enqueue(first.getRightNode());
    }

    return results;
  }

  public void breadFirstRecursion(Tnode<T> first, boolean endCase, List<Tnode> level)
  {

    if(endCase) return;
    first = queue.dequeue();
    xList.add(first.getData());
    if(first.getLeftNode() != null){
      queue.enqueue(first.getLeftNode());
      level.add(first.getLeftNode());
    }
    if(first.getRightNode() != null){
      queue.enqueue(first.getRightNode());
      level.add(first.getLeftNode());
    }
    breadFirstRecursion(first, queue.isEmpty(), level);
    breadFirstRecursion(first, queue.isEmpty(), level);
  }



}
