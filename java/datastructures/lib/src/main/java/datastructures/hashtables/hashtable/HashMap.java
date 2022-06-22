package datastructures.hashtables.hashtable;

import java.math.BigInteger;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class HashMap<K, V> {

  ArrayList<LinkedList<HashMapPair<K,V>>> arr;
  LinkedList<HashMapPair<K,V>>[] arr2;
  //private int size;
  private int N;

  //public int λ = 0; // loadfactor n/m

  //array of linked list
  //suppose m = number of slots, n = number elements(keys) in hash table
  //https://www.cs.miami.edu/home/odelia/teaching/csc317.sp15/syllabus/
  //hash tables load factor is n/m. if n = m , then load factor is 1
  //has a probability of 1 / m of collision for key hashes to each slot!

  public HashMap(int size) throws IllegalAccessException{
    if(size < 1) throw new IllegalAccessException("too small and must be greater than one.");

    this.N = size;
    this.arr = new ArrayList<>(N);
    this.arr2 = new LinkedList[N];
    for(int i = 0; i<N; ++i)
    {
      arr2[i] = new LinkedList<>();
      arr.add(i, new LinkedList<>());
    }
  }
public void set(K key, V value)
{
  int index = hashing((K) key);
  LinkedList<HashMapPair<K,V>> list = arr.get(index);
//  LinkedList<HashMapPair<K,V>> list2 = arr2[index];

  if(list.size() == 0)
  {
    list.add(new HashMapPair<>(key, value));
    return;
  }
    for(HashMapPair<K,V> pair : list)
    {
      if(pair.getKey().equals(key)){
        pair.setValue(value);
        return;
      }
    }

  list.add(new HashMapPair<>(key, value));//TODO: check logic
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
  /*
    knuths vesion of Multiplication method
    - math algo is as follows: hashing(k) = ((A*k) mod 2**w)) >> (w-r)
    - where k = key, is some w bits. a is a random integer. 2**w is the right most w bits, r is the  right most second set of bits on its left most set of bits
    - shifts bits by using and and adding with >>
    - the result is then a unique value


   knuths method
   int k = key;//assume key is an int or .hashcode()
    long unsignedValue = ((long) k ) - Integer.MIN_VALUE;
    long unsignedIntMax = (1l << 32);
    //knults multiplication method
    long unsignedHashValue = ((unsignedValue * 2654435761l) % unsignedIntMax);
    //convert bak to signed integer
    return (int) (unsignedHashValue + Integer.MIN_VALUE);



    Multiplication Method (Cormen). Choose m to be a power of 2. Let A be some random-looking real number. Knuth suggests M = 0.5*(sqrt(5) - 1). Then do the following:

     s = k*A
     x = fractional part of s
     h(k) = floor(m*x)
This seems to be the method that the theoreticians like.

To do this quickly with integer arithmetic, let w be the number of bits in a word (e.g. 32) and suppose m is 2^p. Then compute:

     s = floor(A * 2^w)
     x = k*s
     h(k) = x >> (w-p)      // i.e. right shift x by (w-p) bits
                            // i.e. extract the p most significant
                            // bits from x

    https://stackoverflow.com/questions/664014/what-integer-hash-function-are-good-that-accepts-an-integer-hash-key
   */

  //TODO: figure out how to do this in java with a mod on N
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
