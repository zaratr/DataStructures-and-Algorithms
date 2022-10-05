package datastructures.graphs;

import java.util.Random;

public class Edge <T> {
  private Vertex<T> vertex;
  private int weight;

  public Edge(Vertex<T> uVertex)
  {setVertex(uVertex); setWeight(new Random().nextInt(10 - 0 + 1) + 0);}

  public Edge(Vertex uVertex, int uWeight)
  {setVertex(uVertex); setWeight(uWeight);}

  public Vertex<T> getVertex() {
    return vertex;
  }

  public void setVertex(Vertex<T> vertex) {
    this.vertex = vertex;
  }

  public int getWeight() {
    return weight;
  }

  public void setWeight(int weight) {
    this.weight = weight;
  }
}
