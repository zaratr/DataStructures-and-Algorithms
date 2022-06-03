package datastructures.tree;

public class Node <T>{
  public Node(T data)
  {
    this.data = data;
  }
  public Node()
  {

  }

  private T data;
  private Node leftNode;
  private Node rightNode;

  public T getData() {
    return data;
  }

  public Node getLeftNode() {
    return leftNode;
  }

  public Node getRightNode() {
    return rightNode;
  }

  public void setData(T data) {
    this.data = data;
  }

  public void setLeftNode(Node leftNode) {
    this.leftNode = leftNode;
  }

  public void setRightNode(Node rightNode) {
    this.rightNode = rightNode;
  }
}
