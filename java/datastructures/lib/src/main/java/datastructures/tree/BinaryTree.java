package datastructures.tree;

//import datastructures.queue.Queue;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.concurrent.LinkedBlockingDeque;

public class BinaryTree {
  Node<Integer> root;
  List<Integer> levels = new ArrayList<>();
  int max = 0;
  enum TYPE {PREORDER, INORDER, POSTORDER};
  TYPE displayType;
  public ArrayList<Integer> xList;
  BinaryTree()
  {
    displayType = TYPE.PREORDER;
    xList = new ArrayList<>();
    root = new Node<>();
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
  private void preOrder(Node<Integer> root)
  {
    xList.add(root.getData());
    if(root.getLeftNode() != null) preOrder(root.getLeftNode());
    if(root.getRightNode() != null) preOrder(root.getRightNode());
  }


  //recursion
  private void inOrder(Node<Integer> root)
  {
    if(root.getLeftNode() != null) inOrder(root.getLeftNode());
    xList.add(root.getData());
    if(root.getRightNode() != null) inOrder(root.getRightNode());

  }

  //recursion
  private void postOrder(Node<Integer> root)
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


  private String toStringPRE(Node<Integer> root)
  {
    if(root == null) return "";
    String toDisplay = "";
    toDisplay = toDisplay + "{" + root.getData() + "} -> ";
    toDisplay += toStringPRE(root.getLeftNode());
    toDisplay += toStringPRE(root.getRightNode());
    return toDisplay;

  }

  private String toStringIN(Node<Integer> root)
  {
    if(root == null) return "";
    String toDisplay = "";
    toDisplay += toStringIN(root.getLeftNode());
    toDisplay = toDisplay + "{" + root.getData() + "} -> ";
    toDisplay += toStringIN(root.getRightNode());
    return toDisplay;

  }

  private String toStringPOST(Node<Integer> root)
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
  private void maxValue(Node<Integer> root) {
    if(root == null) return ;
    if(root.getData() >= max)
      this.max = root.getData();
    maxValue(root.getLeftNode());
    maxValue(root.getRightNode());

  }

  Queue<Node> queue = new LinkedList<>();
  public void helper(Node<Integer> node, int level, boolean added) {

    if (queue.size() == level)
      levels.add(node.getData());
    if()
    //levels.add(node.getData());
    Node<Integer> temp = queue.remove();
    if (node.getLeftNode() != null)
      helper(node.getLeftNode(), level + 1, queue.add(node.getLeftNode()));
    if (node.getRightNode() != null)
      helper(node.getRightNode(), level + 1, queue.add(node.getRightNode()));
  }
  public List<Integer> levelOrder(Node<Integer> root) {
    if (root == null) return levels;
    helper(root, 0, true);
    return levels;
  }


}
