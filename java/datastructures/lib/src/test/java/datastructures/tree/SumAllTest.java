package datastructures.tree;

import datastructures.tree.BinaryTree;
import datastructures.tree.BinaryTreeTest;
import datastructures.tree.SumAll;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

public class SumAllTest extends BinaryTreeTest {
  @Test
  public void testSumAll()
  {
    BinaryTree sut = new SumAll();
    build(sut);
    assertEquals(((SumAll) sut).sumAll() , 51);
    return;
  }
}
