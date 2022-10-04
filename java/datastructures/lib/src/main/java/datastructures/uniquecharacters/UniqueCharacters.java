package datastructures.uniquecharacters;

import java.util.HashMap;
import java.util.Map;

public class UniqueCharacters {

  public boolean uniqueCharacters(String phrase)
  {
    if(phrase.isEmpty()) throw new RuntimeException("object string is empty");
    return isUnique(createMap(phrase));
  }
  private Map<Character, Boolean> createMap(String wordsPunctuation)
  {
    Map<Character, Boolean> map = new HashMap<>();
    for(Character c : wordsPunctuation
      .replaceAll("\\W+", "")
      //.toLowerCase() - uncomment to not do stretch goal
      .toCharArray()
    )
    {
      if(map.containsKey(c))
        map.replace(c, false);
      else
        map.put(c, true);
    }
    return map;
  }
  private Boolean isUnique(Map<Character, Boolean> map)
  {
    if(map.isEmpty()) throw new RuntimeException("Map is empty");
    for(Map.Entry<Character, Boolean> entry : map.entrySet())
    {
      if(!entry.getValue()) return false;//not unique
    }
    return true;
  }
}
