package datastructures.tree;

public class BinarySearchTree<T> extends BinaryTree{
  public BinarySearchTree(){
    super();
  }
  //wrapper
  public boolean contains(T x)
  {
    return contains(root, x);
  }



  //recursion
  private boolean contains(Tnode<T> root, T target)
  {
    if(root == null) return false;
    if(root.getData() == target) return true;

    return (int)root.getData() > (int)target?
      contains(root.getLeftNode(), target):
      contains(root.getRightNode(), target);

  }

  //wrapper
  public void add(int value) {
    add(root, value);

  }
  //recursion
  private Tnode<Integer> add(Tnode<Integer> root, int data)
  {
    if(root == null)
      return new Tnode<>(data);

    if(data < root.getData())
      root.setLeftNode(add(root.getLeftNode(), data));

    else if(data > root.getData())
      root.setRightNode(add(root.getRightNode(), data));

    return root;
  }
}
