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

  @Test
  public void testHashKey() throws IllegalAccessException {
    HashMap<String, String > sut = new HashMap<>(5);
    HashMap<String, String > sut2 = new HashMap<>(100);
    HashMap<String, String > sut3 = new HashMap<>(100);
    assertEquals(sut.hashing("5"), 3);
    assertEquals(sut2.hashing(123), 1);
//    assertEquals(sut3.knuthsHashing(123), 1);
    return;

  }

}
