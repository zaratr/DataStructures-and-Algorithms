package datastructures.karytree;


import java.util.ArrayList;

public class KaryTree <T>{
  private Tnode<T> root;
  //private ArrayList<T> data = new ArrayList<>();



  public KaryTree(){}

  public KaryTree( Tnode<T> root) {
    this.root = root;
  }



  public Tnode<T> getRoot() {
    return root;
  }

  public void setRoot(Tnode root)
  {
//    this.root =new Tnode<>();
    this.root = root;
    //this.root.setChildren(root.getChildren());
  }

  public T getData() {
    return root.getData();
  }

  public void setData(T data) {
    this.root.setData(data);
  }


  @Override
  public String toString()
  {
    if(root == null) return null;
    return root.getChildren().toString();
  }





}














































