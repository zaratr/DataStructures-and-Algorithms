package datastructures.hashtables.hashtable;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;


/**
 * Class hashmap uses only a few arguments. some experimentation had been done with hashfunction
 * Previous implementation was incorrect do to rushing the implementation.
 * Current implementation fixes the issue with chaining method.
 * to see the a few different types of hash function implementation
 * @see #knuthsHashing(Object)
 * @see #hashing(Object)
 * @param <K>
 * @param <V>
 */
public class HashMap<K, V> {

  ArrayList<LinkedList<HashMapPair<K,V>>> arr;
  private int N;

  /**
   *
   * {@code public int λ = 0;} // loadfactor n/m
   * array of linked list
   * suppose m = number of slots, n = number elements(keys) in hash table
   *  https://www.cs.miami.edu/home/odelia/teaching/csc317.sp15/syllabus/
   * hash tables load factor is n/m. if n = m , then load factor is 1
   * has a probability of 1 / m of collision for key hashes to each slot!
   */

  /**
   * Constructor with argument that sets the size of the HashMap
   *
   * @param size
   * @throws IllegalAccessException
   */
  public HashMap(int size) throws IllegalAccessException{
    if(size < 1) throw new IllegalAccessException("too small and must be greater than one.");

    this.N = size;
    this.arr = new ArrayList<>(N);
    for(int i = 0; i<N; ++i)
    {
      arr.add(i, new LinkedList<>());
    }
  }
public void set(K key, V value)
{
  /**
   * uses hash function to generate to reference which bucket
   */
  int index = hashing((K) key);
  boolean found = false;// uses this line to determine if it is new entry or change the old value
  LinkedList<HashMapPair<K,V>> list = arr.get(index);

  //change the old value if matches
    for(HashMapPair<K,V> pair : list)
    {
      if(pair.getKey().equals(key)){
        pair.setValue(value);
        found = true;
        break;
      }
    }

    //else - add the value in list
    if(!found)
      list.add(new HashMapPair<>(key, value));
    return;
}

public V get(K key)
{
  int index = hashing((K) key);
  LinkedList<HashMapPair<K,V>> list = arr.get(index);
  for(HashMapPair<K, V> pair : list)
  {
    if(pair.getKey().equals(key)){
      return pair.getValue();
    }
  }
  return null;
}



public boolean contains(K key)
{
  int index = hashing((K) key);
  LinkedList<HashMapPair<K,V>> list = arr.get(index);
  for(HashMapPair<K, V> pair : list)
  {
    if(pair.getKey().equals(key)){
      return true;
    }
    else
      break;
  }
  return false;

}

public List<String> keys()
{
  List<String> keysList = new ArrayList<>();
  for(LinkedList<HashMapPair<K,V>> list : arr)
  {
    for(HashMapPair<K, V> pair : list)
    {
      String toDisplay = "Data: " + pair.getKey().toString() + " - count: " + pair.getValue().toString();
      keysList.add(toDisplay);
    }
  }
  return keysList;

}

  public int size() {
    return N;
  }



  public ArrayList<LinkedList<HashMapPair<K, V>>> getArr() {
    return arr;
  }


public List<String> keyAndValues()
{
  List<String> keysList = new ArrayList<>();
  for(LinkedList<HashMapPair<K,V>> list : arr)
  {
    for(HashMapPair<K,V> pair : list){
      String toTransfer = "Word: " + pair.getKey().toString() + " - Count: " + pair.getValue().toString();
      keysList.add(toTransfer);
    }
  }
  return keysList;
}






/*
  Multiplication Method
  - Converts a key to a fraction 0 < value < 1
  - then gets mapped onto hash table
  - Pros:
    - Choice of m not as critical as in division method.

  - Cons:
    - slower than division at key value less than 2**k
https://www.cs.miami.edu/home/odelia/teaching/csc317.sp15/syllabus/Algorithms5cSlides.pdf

 */

  public int hashing(int k)
  {
    //N : array size;
    double A = .618033;
    return (int)(N * (k * A % 1));//casting to int is a floor
  }
  public int hashing(K key)
  {

    int k = key.hashCode();
    //N : array size;
    double A = .618033;
      int x = (int)(N * (k * A % 1));//casting to int is a floor
//      int x = Math.abs(key.hashCode()) % N;
    return x;
  }

  /**
    * Knuths version of Multiplication Method.<br>
    *   math algo is as follows: hashing(k) = ((A*k) mod 2**w)) >> (w-r)<br>
    * where k = key, is some w bits. a is a random integer. 2**w is the right most w bits, r is the  right most second set of bits on its left most set of bits <br>
    * shifts bits by using and and adding with >><br>
    * the result is then a unique value <br>
   * <br><br>
   *
   * knuths method - Pseudo Code Algorithm<br>
   * int k = key;//assume key is an int or .hashcode()<br>
   * long unsignedValue = ((long) k ) - Integer.MIN_VALUE;<br>
   * long unsignedIntMax = (1l << 32);<br>
   * knults multiplication method<br>
   * long unsignedHashValue = ((unsignedValue * 2654435761l) % unsignedIntMax);<br>
   * convert back to signed integer<br>
   * return (int) (unsignedHashValue + Integer.MIN_VALUE);<br>
   * <a href="https://stackoverflow.com/questions/664014/what-integer-hash-function-are-good-that-accepts-an-integer-hash-key">HashFunction reference</a>
   * <br><br><br>
   */


   /**
   * Multiplication Method (Cormen). Choose m to be a power of 2. Let A be some random-looking real number. Knuth suggests M = 0.5*(sqrt(5) - 1). Then do the following: <br>
   * <br><br>
   *
   * Algorithm - <br>
   * s = k*A <br>
   * x = fractional part of s <br>
   * h(k) = floor(m*x) <br>
  This seems to be the method that the theoreticians like.<br><br>

  * To do this quickly with integer arithmetic, let w be the number of bits in a word (e.g. 32) and suppose m is 2^p. Then compute: <br>
  * <br> <br>
  *     s = floor(A * 2^w)<br>
  *     x = k*s <br>
  *     h(k) = x >> (w-p)      // i.e. right shift x by (w-p) bits
  *                            // i.e. extract the p most significant
  *                            // bits from x
  *
  * <a href="https://www.cs.hmc.edu/~geoff/classes/hmc.cs070.200101/homework10/hashfuncs.html">more about ash function</a>
   * <a href="http://web.archive.org/web/20071223173210/http://www.concentric.net/~Ttwang/tech/inthash.htm">more about hash functions</a>
   */

  //TODO: figure out how to do this in java with a mod on N

  /**
   * this method is really useful by shifting bits using the golden ratio. also using a prime number
   * thes methods need some more work
   * @param key
   * @return the new has that uses the golden ratio which is extremely useful to avioid collision
   */
  public int knuthsHashing(K key)
  {

    int p = 32; //prime number
    int k = key.hashCode();
    long goldenRatio = 2654435761l ;
    int M = (int) Math.pow(N, p);
    double A = .618033;
    int s = (int) (A * Math.pow(2, goldenRatio));
    int x = k*s;
    return x >> (goldenRatio - p);
  }

  public int knuthsHashing(int key)
  {
    int k = key;
    long unsignedValue = ((long) k ) - Integer.MIN_VALUE;
    long unsignedIntMax = (1l << 32);
    //knults multiplication method
    long unsignedHashValue = ((unsignedValue * 2654435761l) % unsignedIntMax);
    //convert bak to signed integer
    return (int) (unsignedHashValue + Integer.MIN_VALUE) << (32 - 3);
  }

}
