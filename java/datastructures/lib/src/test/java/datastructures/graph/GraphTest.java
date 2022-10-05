package datastructures.graph;

import datastructures.graphs.*;
import org.junit.jupiter.api.Test;

import java.util.ArrayList;

import static org.junit.jupiter.api.Assertions.*;

public class GraphTest {

@Test
  void addNodeAndGetNodeTest() {
    Graphs<String> sut = new Graphs<>();
    assertEquals("Alpha", sut.addVertex("Alpha").getData() + "");
    assertEquals(1,sut.size());
  }
  @Test
  void breadthFirstReturnsCorrectArray() {
    Graphs<String> sut = new Graphs<>();
    Vertex<String> temp1 = sut.addVertex("a");
    Vertex<String> temp2 = sut.addVertex("b");
    Vertex<String> temp3 = sut.addVertex("c");
    Vertex<String> temp4 = sut.addVertex("d");
    Vertex<String> temp5 = sut.addVertex("e");
    Vertex<String> temp6 = sut.addVertex("f");
    sut.addEdge(temp1, temp2);
    sut.addEdge(temp2, temp1);

    sut.addEdge(temp2,temp3);
    sut.addEdge(temp3,temp2);

    sut.addEdge(temp2,temp5);
    sut.addEdge(temp5,temp2);

    sut.addEdge(temp3,temp4);
    sut.addEdge(temp4,temp3);

    sut.addEdge(temp3,temp5);
    sut.addEdge(temp5,temp3);

    sut.addEdge(temp3,temp6);
    sut.addEdge(temp6,temp3);

    sut.addEdge(temp4,temp6);
    sut.addEdge(temp6,temp4);

    sut.addEdge(temp5,temp6);
    sut.addEdge(temp6,temp5);
      assertNotNull(sut.toString());
  }

  public void weightTest() {
    Graphs<String> sut = new Graphs<>();
    Vertex<String> temp1 = sut.addVertex("a");
    Vertex<String> temp2 = sut.addVertex("b");
    Vertex<String> temp3 = sut.addVertex("c");
    Vertex<String> temp4 = sut.addVertex("d");
    Vertex<String> temp5 = sut.addVertex("e");
    Vertex<String> temp6 = sut.addVertex("f");
    sut.addEdge(temp1, temp2,12);
    sut.addEdge(temp2, temp1, 4);

    sut.addEdge(temp2, temp3, 3);
    sut.addEdge(temp3, temp2, 3);

    sut.addEdge(temp2, temp5, 0 );
    sut.addEdge(temp5, temp2, 5);

    sut.addEdge(temp3, temp4,4);
    sut.addEdge(temp4, temp3 , 6);

    sut.addEdge(temp3, temp5, 3);
    sut.addEdge(temp5, temp3, 6);

    sut.addEdge(temp3, temp6, 3);
    sut.addEdge(temp6, temp3,4 );

    sut.addEdge(temp4, temp6, 4);
    sut.addEdge(temp6, temp4, 4);

    sut.addEdge(temp5, temp6, 2);
    sut.addEdge(temp6, temp5, 5);
    ArrayList<Vertex<String>> list = new ArrayList<>();
    list.add(temp1);
    list.add(temp2);
    list.add(temp3);
    list.add(temp4);
    list.add(temp5);
    list.add(temp6);
    for (int i = 0; i < list.size(); i++)
      assertEquals(list.get(i), sut.breadthFirst(temp1).get(i));
  }
}
