package datastructures.hashtable;

import datastructures.hashtablessecond.HashMap;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class HashMapSecondTest
{

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
    //assertEquals(sut2.hashing(123), 1);
//    assertEquals(sut3.knuthsHashing(123), 1);
    return;

  }

  @Test
  public void testHashSetSingleKeyValue() throws IllegalAccessException {

    HashMap<String, String>sut = new HashMap<>(2);
    sut.put("hello", "world");
    assertEquals(sut.size(), 2);
  }

  @Test
  public void testHashSetMultipleKeyValue() throws IllegalAccessException {
    HashMap<String, String>sut = new HashMap<>(2);
    sut.put("hello", "world");
    sut.put("no", "thankyou");
    sut.put("naked", "taylorswift");
    sut.put("sey", "seymorebutts");
    sut.put("seymore", "butts");
    sut.put("sey", "morebutts");
    sut.put("lul", "lulul");
    assertEquals(sut.size(), 2);
  }
  @Test
  public void testContainsKey() throws IllegalAccessException {
    HashMap<String, String>sut = new HashMap<>(2);
    sut.put("hello", "world");
    assert(sut.contains("hello"));
  }
  /*
*/

  @Test
  public void testCollision() throws IllegalAccessException {
    HashMap<String, String>sut = new HashMap<>(2);
    sut.put("hello", "world");
    sut.put("kanye", "yeezy boots");
    sut.put("kanye", "yeezy boots");
    sut.put("jayz", "rock-a-fella");
    sut.put("jayz", "rock");
    sut.put("h", "world");

    assertEquals(sut.keys().toString(), "[Data: hello - count: world, Data: kanye - count: yeezy boots, Data: h - count: world, Data: jayz - count: rock]");
    return;

  }




}
