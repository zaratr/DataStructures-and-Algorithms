package datastructures.graphs;

public class Vertex<T> {
  T data;
  Vertex(T data )
  {
    this.data = data;
  }
  @Override
  public boolean equals(Object toCmp)
  {
    if(toCmp == null) return false;
    if(toCmp == this) return true;
    if(!(toCmp instanceof Vertex)) return true;
    Vertex v = (Vertex) toCmp;
    return v.data.equals(this.data);
  }

}
