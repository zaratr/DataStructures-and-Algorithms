package datastructures.hashtablessecond;

import datastructures.hashtables.HashMapPair;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class HashMap<K,V> {

  private List<Bucket<K,V>> hashTable;
  private int N;
  private K key;
  private V value;


  public HashMap() {
    this.N = 2069 ;//arbitrary
    this.hashTable = new ArrayList();//cosntructor doesn't do anything - length = 0, no elements
    for(int i = 0; i < N; ++i)
    {
      hashTable.add(new Bucket());
    }
  }
  public HashMap(int N)
  {
    this.N = N;
    this.hashTable = new ArrayList();
    for(int i = 0; i < N; ++i)
    {
      hashTable.add(new Bucket());
    }
  }

  public int size(){return N;}

  public void put(K key, V value) {
    int hashedKey = hashing(key);
    hashTable.get(hashedKey).update(key, value);

  }


  public V get(K key) {
    int hashedKey = hashing(key);
    return hashTable.get(hashedKey).get(key);
  }

  public void remove(K key) {
    int hashedKey = hashing(key);
    hashTable.get(hashedKey).remove(key);
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


  /*
  public  final int hashing(K key)//public for testing
  {
    int hashedKey = key.hashCode();
    return (key == null) ? 0: hashedKey ^( hashedKey >>> 16);
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


