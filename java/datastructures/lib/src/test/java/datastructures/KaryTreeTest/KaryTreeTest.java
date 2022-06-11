package datastructures.KaryTreeTest;

import datastructures.fizzbuzztree.FizzBuzzTree;
import datastructures.karytree.KaryTree;
import datastructures.karytree.Tnode;
import datastructures.tree.BinaryTree;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
public class KaryTreeTest {

  public void build( KaryTree parent)
  {
    Tnode<Integer> sut1 = new Tnode<>(5);
    Tnode<Integer> sut2a = new Tnode<>(4);
    Tnode<Integer> sut2b = new Tnode<>(6);
    Tnode<Integer> sut2c = new Tnode<>(7);
    Tnode<Integer> sut3a = new Tnode<>(2);
    Tnode<Integer> sut3b = new Tnode<>(1);
    Tnode<Integer> sut3c = new Tnode<>(15);
    Tnode<Integer> sut3d = new Tnode<>(8);

    sut2a.addChild(sut3a);
    sut2a.addChild(sut3b);
    sut2a.addChild(sut3c);
    //sut2b children are null
    sut2c.addChild(sut3d);

    sut1.addChild(sut2a);
    sut1.addChild(sut2b);
    sut1.addChild(sut2c);
    parent.setRoot(sut1);

  }
  @Test
  public void testFizzBuzz()
  {
    KaryTree<Integer> tree = new KaryTree<>();
    FizzBuzzTree test = new FizzBuzzTree();
    build(tree);

    KaryTree sut = test.fizzBuzz(tree);

    assertTrue (sut.toString().equals("[Data: (4) -> Children: 2 - 1 - FizzBuzz - NULL, Data: (Fizz) -> Children: NULL, Data: (7) -> Children: 8 - NULL]") &&
      sut.getRoot().toString().equals("Data: (Buzz) -> Children: 4 - Fizz - 7 - NULL"));
    return;
  }


}
