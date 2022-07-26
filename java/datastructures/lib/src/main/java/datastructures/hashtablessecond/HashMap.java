package datastructures.hashtablessecond;

import java.util.ArrayList;
import java.util.List;

class MyHashMap {

  private List<Bucket> hashTable;
  private int N;


  public MyHashMap() {
    this.N = 2069 ;//arbitrary
    this.hashTable = new ArrayList();//cosntructor doesn't do anything - length = 0, no elements
    for(int i = 0; i < N; ++i)
    {
      hashTable.add(new Bucket());
    }
  }
  public MyHashMap(int N)
  {
    this.N = N;
    this.hashTable = new ArrayList();
    for(int i = 0; i < N; ++i)
    {
      hashTable.add(new Bucket());
    }
  }


  public void put(int key, int value) {
    int hashedKey = hashFunction(key);
    hashTable.get(hashedKey).update(key, value);

  }

  public int get(int key) {
    int hashedKey = hashFunction(key);
    return hashTable.get(hashedKey).get(key);
  }

  public void remove(int key) {
    int hashedKey = hashFunction(key);
    hashTable.get(hashedKey).remove(key);
  }
  private int hashFunction(int key)
  {
    //multiplacation method.
    int K = key;
    double A = .618033;
    return (int)(N * (K * A % 1 ));
  }


}

