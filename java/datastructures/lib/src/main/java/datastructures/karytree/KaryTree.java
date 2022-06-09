package datastructures.karytree;


import java.util.ArrayList;

public class KaryTree <T>{
  private Tnode<T> root;
  private ArrayList<T> data = new ArrayList<>();



  public KaryTree(){}

  public KaryTree( Tnode<T> root) {
    this.root = root;
  }


  public ArrayList preOrderTraversal(){
    if (root == null){
      return null;
    }
    data = new ArrayList<>();
    preOrder(this.root);
    return data;
  }


  private void preOrder(Tnode<T> currentNode) {
    data.add(currentNode.getData());
    if (currentNode.children != null){
      for(Tnode<T> n : currentNode.getChildren()){
        preOrder(n);
      }
    }
  }



  public Tnode<T> getRoot() {
    return root;
  }

  public void setRoot(Tnode root) {
    this.root = root;
  }

  public ArrayList<T> getData() {
    return data;
  }

  public void setData(ArrayList<T> data) {
    this.data = data;
  }





















}














































