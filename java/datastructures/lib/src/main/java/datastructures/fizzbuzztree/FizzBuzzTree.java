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

  public FizzBuzzTree() {
  }

  //wrapper
  public KaryTree<String> fizzBuzz(KaryTree<Integer> tree) {
    this.strKary = new KaryTree<>();
    /********** Case A: temp KaryNode usage *********/
    strKary.setRoot(fizzBuzz(tree.getRoot()));//strKary.getRoot());
    /********** Case B: pass in tree's root *********/
//    strKary.setRoot(fizzBuzz(tree.getRoot(), strKary.getRoot()));
    return strKary;
  }

  // fizzBuzz recursive that does three things labeled [1], [2], and [3].
  // checking fizzbuzz involves (case 1), (case 2) and (case 3). Usage of Switch(x) can be used.

  //recursion
  //uncomment to use case B: strRoot
  private Tnode<String> fizzBuzz(Tnode<Integer> root)//, Tnode<String> strRoot)
  {
    /***** [1] -Base Case*****/
    if (root == null) return null;
    Tnode<String> temp = new Tnode<>();
//    strRoot = new Tnode<>();


    /***** [2] Problem Domain: Check Fizzbuzz *****/
    /***** (Case: 1) - if x mod 3x5 *****/
    if (root.getData() % 5 == 0 && root.getData() % 3 == 0)
      temp.setData("FizzBuzz");
//        strRoot.setData("FizzBuzz");

    /***** (Case: 2) - Buzz if x mod 5*****/
    else if (root.getData() % 5 == 0)
      temp.setData("Buzz");
//      strRoot.setData("Buzz");

    /***** (Case: 3) - Fizz if x mod 3 *****/
    else if (root.getData() % 3 == 0)
      temp.setData("Fizz");
//      strRoot.setData("Fizz");

    /***** (Case: 4) - turn num into string *****/
    else //not either of three cases
      temp.setData("" + root.getData());
//      strRoot.setData(""+root.getData());


    /***** [3] - traversal using recursion ( head(direct) Recursion )*****/
    for (Tnode n : root.getChildren())
      temp.getChildren().add(fizzBuzz(n));
//        strRoot.getChildren().add(fizzBuzz(n, strRoot));

    //[4] Final conditions
    return temp;// needs to return Tnode<string> for the add usage recursive call. doubles for returning it in the wrapper method
//    return strRoot;
  }


}
