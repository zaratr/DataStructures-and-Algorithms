package datastructures.tree;

public class SumAll extends BinaryTree{
  public SumAll(){super();}
  public int sumAll(){
    return sumAll(root);
  }
  private int sumAll(Tnode<Integer> root)
  {
    if(root == null) return 0;
    return sumAll(root.getLeftNode())  +
    sumAll(root.getRightNode()) + root.getData();
  }
}
