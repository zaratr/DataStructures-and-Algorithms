package datastructures.tree;

import org.junit.jupiter.api.Test;

import java.util.Random;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class TreeTest {

  public Node<Integer> treeBuilder(Tree BinaryTree, int length)
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
    Tree BinaryTree = new Tree(),
      test = new Tree();
    test.root = treeBuilder(BinaryTree, 1);//both children are nodes
    assertEquals(BinaryTree.toString(), test.toString());
    return;
  }

  @Test
  public void testTreeLeft()
  {
    Tree sut = new Tree(),
      test = new Tree();
    test.root = treeBuilder(sut, 2);
    //assertEquals(sut.toString(), test.toString());
    assertEquals(sut.preOrder().toString(), test.toString());
    assertEquals(sut.inOrder().toString(), test.toString());
    assertEquals(sut.postOrder().toString(), test.toString());
  }@Test
  public void testTreeRight()
  {
    Tree sut = new Tree(),
      test = new Tree();
    test.root = treeBuilder(sut, 2);
    //assertEquals(sut.toString(), test.toString());
    assertEquals(sut.preOrder().toString(), test.toString());
    assertEquals(sut.inOrder().toString(), test.toString());
    assertEquals(sut.postOrder().toString(), test.toString());
    return;
  }
}
