package datastructures.tree_intersection;

import datastructures.tree.BinaryTree;
import datastructures.tree.Tnode;

import java.util.ArrayList;
import java.util.List;

public class TreeIntersection<T> {

  public List<T> treeIntersection(BinaryTree<T> A, BinaryTree<T> B)
  {
    List<T> list = new ArrayList<>();
    treeIntersection(A, B.root, list);
    return list;
  }

  private void treeIntersection(BinaryTree<T> A, Tnode<T> B, List<T> list)
  {
    if(B == null) return;
    if(A.search(B.getData())) list.add(B.getData());
    treeIntersection(A, B.getLeftNode(), list);
    treeIntersection(A, B.getRightNode(), list);
  }
}
