package datastructures.fizzbuzztree;

import datastructures.karytree.KaryTree;
import datastructures.karytree.Tnode;

public class FizzBuzzTree {
  private KaryTree strKary;
  public FizzBuzzTree(){}

  //wrapper
  public KaryTree<String> fizzBuzz(KaryTree<Integer> tree)
  {
    fizzBuzz(tree.getRoot());
    return strKary;
  }
  public Tnode<String> fizzBuzz(Tnode<Integer> root)
  {
    if(root == null) return null;
    strKary.setRoot(new Tnode<>());
    if(root.getData() %5 == 0 && root.getData() % 3 == 0){
      //FizzBuzz
      strKary.getRoot().setData("FizzBuzz");
    }
    else if(root.getData() %5 == 0)
    {
      //Fizz
      strKary.getRoot().setData("Fizz");


    }
    else if( root.getData() % 3 == 0)
    {
      //Buzz
      strKary.getRoot().setData("Buzz");
    }
    else //not either of three cases
    {
      //turn num into string
      strKary.getRoot().setData("" + root.getData());
    }
    for(Tnode n : root.getChildren())
      strKary.getRoot().getChildren().add(fizzBuzz(n));
    return strKary.getRoot();

  }


}
