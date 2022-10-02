package datastructures.leftjoin;

import org.apache.commons.collections4.multimap.HashSetValuedHashMap;
import org.checkerframework.checker.units.qual.A;

import java.util.ArrayList;
import java.util.List;
import java.util.HashMap;
import java.util.Map.Entry;

public class LeftJoin<K, V> {

  private List<List<String>> twoDlist;
  private List<String> list;
  public List<List<String>> leftJoin1(HashMap<K,V> amap, HashMap<K, V> bMap)
  {
    if(amap.isEmpty() || bMap.isEmpty()) return null;
    this.twoDlist = new ArrayList<>();
    amap.forEach((k,v) -> {
      if(bMap.containsKey(k)){
          list = new ArrayList<>();
          list.add((String)k + ", " + (String)v + ", " + (String)bMap.get(k));
      }
      else {//bMap doesn't contain key
        list = new ArrayList<>();
        list.add((String) k + ", " + (String)v + ", " + "null");
      }
      twoDlist.add(list);
    });
    return twoDlist;
  }

  public List<List<String>> leftJoin2(HashMap<K,V> amap, HashMap<K, V> bMap)
  {
    if(amap.isEmpty() || bMap.isEmpty()) return null;
    twoDlist = new ArrayList<>();
    List<String> tlist;

    for(Entry<K,V> pair : amap.entrySet())
    {
      if(bMap.containsKey(pair.getKey()))
      {
        tlist = new ArrayList<>();
        tlist.add((String)pair.getKey());
        tlist.add((String)pair.getValue());
        tlist.add((String)bMap.get(pair.getKey()));
      }
      else{//bMap key value pair not in aMap
        tlist = new ArrayList<>();
        tlist.add((String)pair.getKey());
        tlist.add((String)pair.getValue());
        list.add("null");
      }
      twoDlist.add(tlist);
    }


      return twoDlist;
  }


}
