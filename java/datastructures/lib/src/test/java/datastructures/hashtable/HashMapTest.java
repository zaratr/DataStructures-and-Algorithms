package datastructures.hashtable;

import datastructures.hashtables.hashtable.HashMap;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

public class HashMapTest {


  @Test
    public void testHashMapSize() throws IllegalAccessException {
    HashMap<String, String> sut = new HashMap<>(5);
    assertEquals(sut.size(), 5);
  }

}
