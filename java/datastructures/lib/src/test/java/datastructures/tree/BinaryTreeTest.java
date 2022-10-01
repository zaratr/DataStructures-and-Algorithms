package datastructures.tree;

import datastructures.tree_intersection.TreeIntersection;
import org.junit.jupiter.api.Test;

import java.awt.color.ICC_ColorSpace;
import java.util.List;
import java.util.Random;

import static org.junit.jupiter.api.Assertions.*;

public class BinaryTreeTest {

  public Tnode<Integer> treeBuilder(BinaryTree BinaryTree, int length)
  {
    Tnode main = BinaryTree.root = new Tnode<>(new Random().nextInt(10 - 0 + 1) + 0);
    switch (length) {
      case 1:
        main.setLeftNode(new Tnode<>(new Random().nextInt(10 - 0 + 1) + 0));
        main.setRightNode(new Tnode<>(new Random().nextInt(10 - 0 + 1) + 0));
        break;
      case 2:
        main.setLeftNode(new Tnode<>(new Random().nextInt(10 - 0 + 1) + 0));
        main.setRightNode(new Tnode<>(null));
        break;
      case 3:
        main.setLeftNode(new Tnode<>(null));
        main.setRightNode(new Tnode<>(new Random().nextInt(10 - 0 + 1) + 0));
        break;
      default:
        break;
    }
    return main;

  }


  @Test
  public void testTreeBalanced()
  {
    BinaryTree sut = new BinaryTree(),
      test = new BinaryTree();
    test.root = treeBuilder(sut, 1);//both children are nodes

    assertEquals(sut.preOrder().xList.toString(),test.preOrder().xList.toString());
    assertEquals(sut.inOrder().xList.toString(),test.inOrder().xList.toString());
    assertEquals(sut.postOrder().xList.toString(),test.postOrder().xList.toString());
    return;
  }

  @Test
  public void testTreeLeft()
  {
    BinaryTree sut = new BinaryTree(),
      test = new BinaryTree();
    test.root = treeBuilder(sut, 2);
    assertEquals(sut.preOrder().xList.toString(),test.preOrder().xList.toString());
    assertEquals(sut.inOrder().xList.toString(),test.inOrder().xList.toString());
    assertEquals(sut.postOrder().xList.toString(),test.postOrder().xList.toString());
  }


  @Test
  public void testTreeRight()
  {
    BinaryTree sut = new BinaryTree(),
      test = new BinaryTree();
    test.root = treeBuilder(sut, 3);
    assertEquals(sut.preOrder().xList.toString(),test.preOrder().xList.toString());
    assertEquals(sut.inOrder().xList.toString(),test.inOrder().xList.toString());
    assertEquals(sut.postOrder().xList.toString(),test.postOrder().xList.toString());
    return;
  }


  @Test
  public void testBase()
  {
    BinaryTree sut = new BinaryTree();
    sut.root = new Tnode<>(1);
    Tnode<Integer> root = sut.root;
    root.setLeftNode(new Tnode<>(2));
    root.setRightNode(new Tnode<>(3));
    assertEquals("{1} -> {2} -> {3} -> NULL", sut.preOrder().toString());

    return;
  }

  @Test
  public void testContains()
  {
    BinarySearchTree sut = new BinarySearchTree();
    sut.root = new Tnode<>(1);
    Tnode<Integer> root = sut.root;
    root.setLeftNode(new Tnode<>(2));
    root.setRightNode(new Tnode<>(3));
    boolean x = sut.contains(4);
    assertTrue(!x);
    return;
  }

  public void build(BinaryTree sut)
  {
    BinaryTree sut1a = new BinaryTree();
    BinaryTree sut1b = new BinaryTree();

    BinaryTree sut2a = new BinaryTree();
    BinaryTree sut2b = new BinaryTree();
    BinaryTree sut2c = new BinaryTree();

    BinaryTree sut3a = new BinaryTree();
    BinaryTree sut3b = new BinaryTree();
    BinaryTree sut3c = new BinaryTree();

    sut.root = new Tnode<>(2);
    sut1a.root = new Tnode<>(7);
    sut1b.root = new Tnode<>(5);

    sut2a.root = new Tnode<>(2);
    sut2b.root = new Tnode<>(6);
    sut2c.root = new Tnode<>(9);

    sut3a.root = new Tnode<>(5);
    sut3b.root = new Tnode<>(11);
    sut3c.root = new Tnode<>(4);

    sut3a.root.setLeftNode(null);
    sut3a.root.setRightNode(null);
    sut3b.root.setLeftNode(null);
    sut3b.root.setRightNode(null);
    sut3c.root.setLeftNode(null);
    sut3c.root.setRightNode(null);

    sut2a.root.setLeftNode(null);
    sut2a.root.setRightNode(null);

    sut2b.root.setLeftNode(sut3a.root);
    sut2b.root.setRightNode(sut3b.root);

    sut2c.root.setRightNode(null);
    sut2c.root.setLeftNode(sut3c.root);

    sut1a.root.setLeftNode(sut2a.root);
    sut1a.root.setRightNode(sut2b.root);

    sut1b.root.setRightNode(sut2c.root);

    sut.root.setLeftNode(sut1a.root);
    sut.root.setRightNode(sut1b.root);





    return ;
  }
  @Test
  public void testMaxOne()
  {
    BinaryTree sut = new BinaryTree();
    build(sut);
    sut.maxValue();
    return;
  }

  @Test
  public void testBfs() {
    BinaryTree sut = new BinaryTree();
    build(sut);
    List<Integer> test = sut.levelOrder(sut.root);
    assertEquals("[2, 7, 5, 2, 6, 9, 5, 11, 4]", test.toString() );
    return;
  }

  @Test
  public void testSearch()
  {
    BinaryTree sut = new BinaryTree();
    build(sut);
    boolean result = sut.search(11);
    boolean resultfalse = sut.search(3);
    assertEquals(true, result);
    assertEquals(false, resultfalse);

    return;

  }

  @Test
  public void testIntersection()
  {
    BinaryTree<Integer> A = new BinaryTree();
    BinaryTree<Integer> B = new BinaryTree();
    BinaryTree<Integer> falseTest = new BinaryTree();

    build(A);
    //treeBuilder(B,1);
    B.root = new Tnode<>(4);
    B.root.setLeftNode(new Tnode(9));
    B.root.setRightNode(new Tnode(2));
    falseTest.root = new Tnode<>(0);

    List<Integer> result = new TreeIntersection().treeIntersection(A, B);
    List<Integer> resultFalse = new TreeIntersection().treeIntersection(A, falseTest);

    assertEquals("[4, 9, 2]", result.toString());
    assertEquals("[]", resultFalse.toString());
  }


}
