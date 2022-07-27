package datastructures.hashtablessecond;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

class Bucket<K, V>
{
  public List<Pair<K, V>> list;

  public Bucket()
  {
    list = new LinkedList<Pair<K,V>>();
  }

  public V get(K key)
  {
    if(key == null || list == null) return null;//quick check before traversing
    V checkerV = null;
    for (Pair<K,V> pair : list)
    {
      if (pair.getKey().equals(key))
      {
        checkerV =  pair.getValue();
        break;
      }
    }
    return checkerV;
  }
  public int update(K key, V value)
  {

    boolean found = false;
    for(Pair<K, V> pair : list)
    {
      if(pair.getKey().equals(key))
      {pair.setValue(value); found = true; break;}

    }
    if(!found)
    {
      list.add(new Pair<K, V> (key, value));
    }
    return 0;
  }

  public void remove(K key)
  {
    for(Pair<K, V> pair : list)
    {
      if(pair.getKey().equals(key))
      {
        list.remove(pair);
        break;
      }
    }

  }

  public boolean contains(K key)
  {
    //list.contains(key);
    for(Pair<K, V> pair : list)
    {
      if(pair.getKey().equals(key)){
        return true;
      }
      else
        break;
    }
    return false;
  }

  public ArrayList<String> getKeys()
  {
    String toDisplay = "";
    ArrayList<String> keysList = new ArrayList<>();
    for(Pair<K, V> pair : list)
    {
      toDisplay = "Data: " + pair.getKey().toString() + " - count: " + pair.getValue().toString();
      keysList.add(toDisplay);
    }
    return keysList;
  }

}
