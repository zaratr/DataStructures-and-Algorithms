package datastructures.tree;

public class BinarySearchTree extends BinaryTree{
  public BinarySearchTree(){
    super();
  }
  //wrapper
  public boolean contains(int x)
  {
    return contains(root, x);
  }



  //recursion
  private boolean contains(Tnode<Integer> root, int target)
  {
    if(root == null) return false;
    if(root.getData() == target) return true;

    return root.getData() > target?
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
