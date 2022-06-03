package datastructures.tree;

import java.util.ArrayList;

public class Tree {
  Node<Integer> root;
  public ArrayList<Integer> xList;
  Tree(){
    xList = new ArrayList<>();
    root = new Node<>();
  }

  //wrapper
  public Tree preOrder()
  {
    preOrder(root, root.getData());
    return this;
  }

  //wrapper
  public Tree inOrder()
  {
    inOrder(root, root.getData());
    return this;
  }

  //wrapper
  public Tree postOrder()
  {
    postOrder(root, root.getData());
    return this;
  }


  //recursion
  private void preOrder(Node<Integer> root, Integer addMe)
  {
    xList.add(addMe);
    if(root.getLeftNode() != null) preOrder(root.getLeftNode(), root.getData());
    if(root.getRightNode() != null) preOrder(root.getRightNode(), root.getData());
  }


  //recursion
  public void inOrder(Node<Integer> root, Integer addMe)
  {
    if(root.getLeftNode() != null) preOrder(root.getLeftNode(), root.getData());
    xList.add(addMe);
    if(root.getRightNode() != null) preOrder(root.getRightNode(), root.getData());

  }

  //recursion
  private void postOrder(Node<Integer> root, Integer addMe)
  {
    if(root.getLeftNode() != null) preOrder(root.getLeftNode(), root.getData());
    if(root.getRightNode() != null) preOrder(root.getRightNode(), root.getData());
    xList.add(addMe);
  }


  @Override
  public String toString()
  {
    String toDisplay = "";
    toDisplay = toString(root);
    return toDisplay + "NULL";
  }
  private String toString(Node<Integer> root)
  {
    if(root == null) return "";
    String toDisplay = "";
    toDisplay += toString(root.getLeftNode());
    toDisplay += toString(root.getRightNode());
    toDisplay = toDisplay + "{" + root.getData() + "} -> ";
    return toDisplay;

  }

}
