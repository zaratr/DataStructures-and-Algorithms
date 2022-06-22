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

  @Test
  public void testHashSetSingleKeyValue() throws IllegalAccessException {
    HashMap<String, String>sut = new HashMap<>(2);
    sut.set("hello", "world");
    assertEquals(sut.getArr().get(0).size(), 1);
  }

  @Test
  public void testHashSetMultipleKeyValue() throws IllegalAccessException {
    HashMap<String, String>sut = new HashMap<>(2);
    sut.set("hello", "world");
    sut.set("no", "thankyou");
    sut.set("naked", "taylorswift");
    sut.set("sey", "seymorebutts");
    sut.set("seymore", "butts");
    sut.set("sey", "morebutts");
    sut.set("lul", "lulul");
    assertEquals(sut.getArr().get(0).size(), 3);
  }
  @Test
  public void testContainsKey() throws IllegalAccessException {
    HashMap<String, String>sut = new HashMap<>(2);
    sut.set("hello", "world");
    assert(sut.contains("hello"));
  }
  /*
*/

  @Test
  public void testCollision() throws IllegalAccessException {
    HashMap<String, String>sut = new HashMap<>(2);
    sut.set("hello", "world");
    sut.set("kanye", "yeezy boots");
    sut.set("kanye", "yeezy boots");
    sut.set("jayz", "rock-a-fella");
    sut.set("jayz", "rock");
    sut.set("h", "world");

    assertEquals(sut.keys().toString(), "[Data: hello - count: world, Data: kanye - count: yeezy boots, Data: h - count: world, Data: jayz - count: rock]");
    return;

  }




}
