package datastructures.fizzbuzztree;

import datastructures.karytree.KaryTree;
import datastructures.karytree.Tnode;

import java.util.ArrayList;


/*
  Fizzbuzz has four cases if 3, 5, 3 & 5, and anything else
  [f] Attempt 1: pass in a string Tree into recursion params: fail - it removes root every recursive call
  [f] Attempt 2: pass in a temp tree into recursion params: fail - it does the same removes the root every stack
  [s] Attempt 3: pass in just the tree's Tnode (karyNode) in params : success it somehow knows I am referencing a KaryNode
  [s] Attempt 4: inside the recursion create a new Temp Tnode(karyNode): success it saves a version on the stack and the
    return will replace the recusive call with a string Tnode(karyNode).

    FINAL THOUGHTS
    - making a karyTree this way, we dont know or care about height. the tree we are given has all comparisons we need.
    So, traverse the whole list regardless of height. add a new tree and its Arraylist of nodes is based on each comparison
    of given tree.
    - by assumption java will save the reference of new tree passing it in recursively because it is implemented in a
    class somewhere else. even when returning newTree.getRoot(),
    inside Tnode<String> fizzBuzz(Tnode<integer> root, Tnode<String> newTree) method. the REFERENCE to the tree is saved
    in the class (where root is being implemented and the tree itself) in the stack as the root node each recursive call.
    - using a Temporary Tnode will fix the recursive problem I was having passing a tempTree.
 */
public class FizzBuzzTree {
  private KaryTree strKary;
  public FizzBuzzTree(){}

  //wrapper
  public KaryTree<String> fizzBuzz(KaryTree<Integer> tree)
  {
    this.strKary = new KaryTree<>();
    /********** Case A: temp KaryNode usage *********/
    strKary.setRoot(fizzBuzz(tree.getRoot())) ;//strKary.getRoot());
    /********** Case B: pass in tree's root *********/
//    strKary.setRoot(fizzBuzz(tree.getRoot(), strKary.getRoot()));
    return strKary;
  }


  //recursion
  //uncomment to use case B: strRoot
  public Tnode<String> fizzBuzz(Tnode<Integer> root)//, Tnode<String> strRoot)
  {
    /***** Base Case*****/
    if(root == null) return null;
    Tnode<String> temp = new Tnode<>();
//    strRoot = new Tnode<>();


    /***** Problem Domain: Check Fizzbuzz*****/
    /***** Case: 1*****/
    if(root.getData() %5 == 0 && root.getData() % 3 == 0){
      //FizzBuzz
      temp.setData("FizzBuzz");
//        strRoot.setData("FizzBuzz");
    }
    /***** Case: 2*****/
    else if(root.getData() %5 == 0)
    {
      //Fizz
      temp.setData("Buzz");
//      strRoot.setData("Buzz");

    }
    /***** Case: 3*****/
    else if( root.getData() % 3 == 0)
    {
      //Buzz
      temp.setData("Fizz");
//      strRoot.setData("Fizz");
    }
    /***** Case: 4*****/
    else //not either of three cases
    {
      //turn num into string
      temp.setData(""+root.getData());
//      strRoot.setData(""+root.getData());
    }


    /***** traversal using recursion*****/
    for (Tnode n : root.getChildren()) {
      temp.getChildren().add(fizzBuzz(n));
//        strRoot.getChildren().add(fizzBuzz(n, strRoot));
    }
    return temp;
//    return strRoot;
  }
}
