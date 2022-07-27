package datastructures.hashtables;

/**
 * Funway to do this is using simpleentry
import java.util.AbstractMap;

public class HashMapPair<K, V> extends AbstractMap.SimpleEntry<K,V>{

  public HashMapPair(K key, V value) {
    super(key, value);
  }

}
 */

/**
 *
 */

public class HashMapPair<K, V> {
  private K key;
  private V value;

  /**
   * key/value pair constructor that takes two arguments
   *
   * @param key  key represents the first context : [x,...]
   * @param value  value represents the first context [..., x]
   */
  public HashMapPair(K key, V value)
  {
    this.key = key;
    this.value = value;
  }


  /**
   * Copy Constructor that places data without referencing same memory
   * @param pair  contains toCopy key/value pair
   */
  public HashMapPair(HashMapPair<? extends K, ? extends V> pair)
  {
    this.key = pair.key;
    this.value = pair.value;
  }

  /**
   *
   * @return the value corresponding to this entry
   */
  public K getKey()
  {
    return key;
  }
  /**
   *
   * @return the value corresponding to this entry
   */
  public V getValue()
  {
    return value;
  }


  /**
   * Replaces the value corresponding to this entry with the specified
   * value.
   *
   * @param value new value to be stored in this entry
   * @return the old value corresponding to the entry
   */
  public V setValue(V value)
  {
    V prevValue = value;
    this.value = value;
    return prevValue;
  }
}
