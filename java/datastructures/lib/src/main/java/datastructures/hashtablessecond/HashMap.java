package datastructures.hashtablessecond;

import java.util.*;

public class HashMap<K,V>{

  private List<Bucket<K,V>> hashTable;
  private int N;
  private K key;
  private V value;


  public HashMap() {
    this.N = 2069 ;//arbitrary default
    this.hashTable = new ArrayList();//cosntructor doesn't do anything - length = 0, no elements
    for(int i = 0; i < N; ++i)
    {
      hashTable.add(new Bucket());
    }
  }
  public HashMap(int N)
  {
    if(N < 0) throw new IllegalArgumentException("Illegal initial capacity");
    this.N = N;
    this.hashTable = new ArrayList();
    for(int i = 0; i < N; ++i)
    {
      hashTable.add(new Bucket());
    }
  }

  public int size(){return N;}

  public V put(K key, V value) {
    int hashedKey = hashing(key);
    hashTable.get(hashedKey).update(key, value);

    return value;
  }


  public V get(Object key) {
    int hashedKey = hashing((K) key);
    return hashTable.get(hashedKey).get((K) key);
  }

  public V remove(Object key) {
    int hashedKey = hashing((K) key);
    V value = hashTable.get(hashedKey).get((K) key);
    hashTable.get(hashedKey).remove((K) key);
    return value;
  }


  public List<String> keys()
  {
    List<String> keysList = new ArrayList<>();
    for(Bucket<K, V> list : hashTable)
    {

      keysList.addAll(list.getKeys());
    }
    return keysList;

  }
  public boolean contains(K key)
  {
    int index = hashing((K) key);
    return hashTable.get(index).contains(key);
  }

  public boolean isEmpty()
  {
    return key.equals(null) ? true : false;
  }


  /*
  public  final int hashing(K key)//public for testing - this code works but different tests needed
  {
    int hashedKey = key.hashCode();
    return (key == null) ? 0: hashedKey ^ ( hashedKey >>> 16);
  }
*/
  public int hashing(K key)
  {
    //multiplacation method.
    int K = key.hashCode();
    double A = .618033;
    return (int)(N * (K * A % 1 ));
  }

}


