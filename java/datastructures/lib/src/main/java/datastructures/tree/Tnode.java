package datastructures.tree;

public class Tnode<T>{
  public Tnode(T data)
  {
    this.data = data;
  }
  public Tnode()
  {

  }

  private T data;
  private Tnode leftNode;
  private Tnode rightNode;

  public T getData() {
    return data;
  }

  public Tnode getLeftNode() {
    return leftNode;
  }

  public Tnode getRightNode() {
    return rightNode;
  }

  public void setData(T data) {
    this.data = data;
  }

  public void setLeftNode(Tnode leftNode) {
    this.leftNode = leftNode;
  }

  public void setRightNode(Tnode rightNode) {
    this.rightNode = rightNode;
  }
}
