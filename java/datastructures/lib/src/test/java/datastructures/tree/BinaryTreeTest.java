package datastructures.tree;

import org.junit.jupiter.api.Test;

import java.util.Random;

import static org.junit.jupiter.api.Assertions.*;

public class BinaryTreeTest {

  public Node<Integer> treeBuilder(BinaryTree BinaryTree, int length)
  {
    Node main = BinaryTree.root = new Node<>(new Random().nextInt(10 - 0 + 1) + 0);
    switch (length) {
      case 1:
        main.setLeftNode(new Node<>(new Random().nextInt(10 - 0 + 1) + 0));
        main.setRightNode(new Node<>(new Random().nextInt(10 - 0 + 1) + 0));
        break;
      case 2:
        main.setLeftNode(new Node<>(new Random().nextInt(10 - 0 + 1) + 0));
        main.setRightNode(new Node<>(null));
        break;
      case 3:
        main.setLeftNode(new Node<>(null));
        main.setRightNode(new Node<>(new Random().nextInt(10 - 0 + 1) + 0));
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
    sut.root = new Node<>(1);
    Node<Integer> root = sut.root;
    root.setLeftNode(new Node<>(2));
    root.setRightNode(new Node<>(3));
    assertEquals("{1} -> {2} -> {3} -> NULL", sut.preOrder().toString());

    return;
  }

  @Test
  public void testContains()
  {
    BinarySearchTree sut = new BinarySearchTree();
    sut.root = new Node<>(1);
    Node<Integer> root = sut.root;
    root.setLeftNode(new Node<>(2));
    root.setRightNode(new Node<>(3));
    boolean x = sut.contains(4);
    return;
  }

  @Test
  public void testaddOne()
  {
    BinarySearchTree sut = new BinarySearchTree();
    sut.root = new Node<>(1);
    sut.add(9);
    sut.add(8);
    sut.add(2);
    return ;
  }

}
