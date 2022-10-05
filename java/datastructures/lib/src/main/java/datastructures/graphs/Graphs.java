package datastructures.graphs;

import java.util.*;
import datastructures.queue.*;
import datastructures.tree.Queue;

public class Graphs<T>  {
  private Map<Vertex<T>, List<Edge<T>>> vertexMap;
  private int edgeCounter;
  private int size;

  public Graphs() {
    this.edgeCounter = 0; this.size = 0;
    List<Vertex> list = new ArrayList<>();
    vertexMap = new HashMap<>();
  }

  public Graphs(Map<Vertex<T>, List<Edge<T>>> vertexMap) {
    this.vertexMap = vertexMap;
    this.edgeCounter = 0; this.size = 0;
  }

  private Map<Vertex<T>, List<Edge<T>>> addVertex(Vertex<T> keyVertex)
  {
    if(!hasVertex(keyVertex)) vertexMap.put(keyVertex, new ArrayList<>() );
    return vertexMap;
  }

  public Vertex<T> addVertex(T vstr)
  {
    Vertex<T> v = new Vertex<>(vstr);

    if(!hasVertex(v)) vertexMap.put(v, new ArrayList<>() );
    ++size;
    return v;

  }
  public void addEdge(Vertex<T> v, Vertex<T> w)
  {
    if(v.equals(null) || w.equals(null)) throw new RuntimeException("objects are null");
    if(!hasVertex(v)) addVertex(v);
    if(!hasVertex(w)) addVertex(w);
    if(!hasEdge(v,w)) edgeCounter++;
    vertexMap.get(v).add(new Edge<>(w));
    //vertexMap.get(w).add(new Edge<>(v));
  }

  public void addEdge(Vertex<T> v, Vertex<T> w, int weight)
  {
    if(v.equals(null) || w.equals(null)) throw new RuntimeException("objects are null");
    if(!hasVertex(v)) addVertex(v);
    if(!hasVertex(w)) addVertex(w);
    if(!hasEdge(v,w)) edgeCounter++;
    vertexMap.get(v).add(new Edge<>(w, weight));
    //vertexMap.get(w).add(new Edge<>(v, weight));
  }

  public Set<Vertex<T>> getVerticesKeys(){//getNodes but didn't sound right for graphs
    return vertexMap.keySet();
  }

  public Iterable<List<Edge<T>>> getAdjacencies(Vertex<T> v)//get neighbors - didn't sound right so changed name.
  {
    if(!hasVertex(v)) throw new IllegalArgumentException(v + " is not valid vertext");
    return Collections.singleton(vertexMap.get(v));
  }

  /*
  public List<T> getAdjacencies(T v)//get neighbors - didn't sound right so changed name.
  {
    if(!hasVertex(v)) throw new IllegalArgumentException(v + " is not valid vertext");
    return vertexMap.get(v);
  }
   */

  public int getEdgeCounter()
  {
    return edgeCounter;
  }

  public Boolean hasEdge(Vertex<T> v, Vertex<T> w)
  {
    if(!hasVertex(v)) throw new IllegalArgumentException(v + " is not valid vertext");
    if(!hasVertex(w)) throw new IllegalArgumentException(w + " is not valid vertext");
    return vertexMap.get(v).contains(w);
  }

  public Boolean hasVertex(Vertex<T> toFind)
  {
    if(toFind.equals(null)) throw new RuntimeException("object is null");
    if(vertexMap.containsKey(toFind)) return true;
    return false;
  }

  public int size() {
    return size;
  }

  public ArrayList<Vertex<T>> breadthFirst(Vertex<T> vertex){
    Queue<Vertex<T>> newQueue = new Queue<>();
    HashSet<Vertex<T>> visited = new HashSet<>();
    ArrayList<Vertex<T>> nodes = new ArrayList<>();
    newQueue.enqueue(vertex);
    visited.add(vertex);
    nodes.add(vertex);
    while(!newQueue.isEmpty()){
      Vertex<T> walker = newQueue.dequeue();
      List<Edge<T>> neighbors = vertexMap.get(walker);
      for(Edge<T> edge : neighbors){
        if(!visited.contains(edge.getVertex())){
          newQueue.enqueue(edge.getVertex());
          visited.add(edge.getVertex());
          nodes.add(edge.getVertex());
        }
      }
    }
    return nodes;
  }
}
