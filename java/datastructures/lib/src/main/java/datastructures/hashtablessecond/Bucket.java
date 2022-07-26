package datastructures.hashtablessecond;

import java.util.LinkedList;
import java.util.List;

class Bucket
{
  public List<Pair<Integer, Integer>> list;

  public Bucket()
  {
    list = new LinkedList<Pair<Integer, Integer>>();
  }

  public int get(int key)
  {

    for (Pair<Integer, Integer> pair : list)
    {
      if (pair.getKey().equals(key))
      {
        return pair.getValue();
      }
    }
    return -1;
  }
  public int update(int key, int value)
  {

    boolean found = false;
    for(Pair<Integer, Integer> pair : list)
    {
      if(pair.getKey().equals(key))
      {pair.setValue(value); found = true; break;}

    }
    if(!found)
    {
      list.add(new Pair<Integer, Integer> (key, value));
    }
    return 0;
  }

  public void remove(int key)
  {
    for(Pair<Integer, Integer> pair : list)
    {
      if(pair.getKey().equals(key))
      {
        list.remove(pair);
        break;
      }
    }

  }

}
