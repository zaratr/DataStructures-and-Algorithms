package datastructures.tree;

//import datastructures.queue.Queue;

import java.util.*;
//import com.google.common.collect.*;


public class BinaryTree {
  Tnode<Integer> root;
  int max = 0;
  enum TYPE {PREORDER, INORDER, POSTORDER};
  TYPE displayType;
  public ArrayList<Integer> xList;
  ArrayList<Integer> results = new ArrayList<>();
  Queue<Tnode<Integer>> queue = new Queue();
  BinaryTree()
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
  private void preOrder(Tnode<Integer> root)
  {
    xList.add(root.getData());
    if(root.getLeftNode() != null) preOrder(root.getLeftNode());
    if(root.getRightNode() != null) preOrder(root.getRightNode());
  }


  //recursion
  private void inOrder(Tnode<Integer> root)
  {
    if(root.getLeftNode() != null) inOrder(root.getLeftNode());
    xList.add(root.getData());
    if(root.getRightNode() != null) inOrder(root.getRightNode());

  }

  //recursion
  private void postOrder(Tnode<Integer> root)
  {
    if(root.getLeftNode() != null) postOrder(root.getLeftNode());
    if(root.getRightNode() != null) postOrder(root.getRightNode());
    xList.add(root.getData());
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


  private String toStringPRE(Tnode<Integer> root)
  {
    if(root == null) return "";
    String toDisplay = "";
    toDisplay = toDisplay + "{" + root.getData() + "} -> ";
    toDisplay += toStringPRE(root.getLeftNode());
    toDisplay += toStringPRE(root.getRightNode());
    return toDisplay;

  }

  private String toStringIN(Tnode<Integer> root)
  {
    if(root == null) return "";
    String toDisplay = "";
    toDisplay += toStringIN(root.getLeftNode());
    toDisplay = toDisplay + "{" + root.getData() + "} -> ";
    toDisplay += toStringIN(root.getRightNode());
    return toDisplay;

  }

  private String toStringPOST(Tnode<Integer> root)
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
    maxValue(root);
    return this.max;
  }
  private void maxValue(Tnode<Integer> root) {
    if(root == null) return ;
    if(root.getData() >= max)
      this.max = root.getData();
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

  public List<Integer> levelOrder(Tnode<Integer> root) {
    if (root == null) return null;
//    for(List<Integer> i: levels)
//    {
//      for(Integer j: i)
//      xList.add(j);
//    }
    queue.enqueue(root);
    //breadFirst();
    //helper(root, 0);
    breadFirstRecursion(new Tnode<Integer>(), false, new ArrayList<>());
    return xList;
  }

  public ArrayList<Integer> breadFirst() {

    Tnode<Integer> first;
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

  public void breadFirstRecursion(Tnode<Integer> first, boolean endCase, List<Tnode> level)
  {

    if(endCase == true) return;
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
