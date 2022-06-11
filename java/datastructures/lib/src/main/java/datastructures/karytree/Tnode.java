package datastructures.karytree;

import java.util.ArrayList;

public class Tnode<T> {
  private T data;
  private ArrayList<Tnode> children;// = new ArrayList<>();//this is needed here for some reason. TODO: why??
  int kMaxChildren;


  public Tnode(){
    //data = null;
    children = new ArrayList<>();
    //kMaxChildren = 0;
  }//set to null
  public Tnode(T data) {
    this.data = data;
    this.children = new ArrayList<>();

  }

  public Tnode(T data, ArrayList<Tnode> children)
  {
    this.data = data;
    //this.children = new ArrayList<>();
    this.children = children;
  }

  //mutators
  public void addChild( Tnode<T> childNode) {
    if(children == null) children = new ArrayList<>();
      children.add(childNode);
  }
  public void setChildren(ArrayList<Tnode> children) {
    this.children = children;
  }
  public void setkMaxChildren(int kMaxChildren) {
    this.kMaxChildren = kMaxChildren;
  }

  public void setData(T data) {
    this.data = data;
  }


  //getters

  public T getData() {
    return data;
  }

  public ArrayList<Tnode> getChildren() {
    return children;
  }


  public int getkMaxChildren() {
    return kMaxChildren;
  }

  @Override
  public String toString()
  {
    String toDisplayChildren = "Children: ";
    String toDisplayData = "Data: " + "(" + data + ")";
    if(children != null) {
      for (Tnode element : children) {
        toDisplayChildren += element.getData().toString() + " - ";
      }
    }
      return  toDisplayData +" -> "  + toDisplayChildren + "NULL";
  }
}
