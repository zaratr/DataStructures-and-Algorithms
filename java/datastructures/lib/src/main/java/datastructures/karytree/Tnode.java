package datastructures.karytree;

import java.util.ArrayList;

public class Tnode<T> {
  public T data;
  public Tnode<T> parent;
  ArrayList<Tnode> children = new ArrayList<>();
  int kMaxChildren;


  public Tnode(){}
  public Tnode(T data) {
    this.data = data;

  }

  public void addChild( Tnode<T> childNode) {
    if (children.size() < kMaxChildren) {
      children.add(childNode);
    }
  }

  public T getData() {
    return data;
  }

  public void setData(T data) {
    this.data = data;
  }

  public Tnode<T> getParent() {
    return parent;
  }

  public void setParent(Tnode<T> parent) {
    this.parent = parent;
  }

  public ArrayList<Tnode> getChildren() {
    return children;
  }

  public void setChildren(ArrayList<Tnode> children) {
    this.children = children;
  }

  public int getkMaxChildren() {
    return kMaxChildren;
  }

  public void setkMaxChildren(int kMaxChildren) {
    this.kMaxChildren = kMaxChildren;
  }
}
