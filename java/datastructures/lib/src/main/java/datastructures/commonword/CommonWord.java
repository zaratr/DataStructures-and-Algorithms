package datastructures.commonword;
import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;
import java.util.concurrent.atomic.AtomicInteger;

public class CommonWord {

  /**
   * Client method that receives a String with special character at MAX_SIZE
   * @param usrbook - String Object that holds sentences including punctuation range [0 and 2^32 -1]
   * passing by reference (int[] or Integer.toString() or using fields will save value similarly)
   * @return String with the longest streak of words
   * @see #getKeyByGreatestValue(Map, Integer)
   * @see #bookIndex(String, AtomicInteger)
   */
  public String commonWord(String usrbook)
  {
    if(usrbook.isEmpty()) throw new RuntimeException("Cannot parse empty Object.");
    Integer greatestCommonValueInBook = 0;
    AtomicInteger asyncInteger = new AtomicInteger(0);
    Map sortedOccurrences = bookIndex(usrbook, asyncInteger);
    return getKeyByGreatestValue(sortedOccurrences, asyncInteger.get());

  }

  /**
   * In a string finds words in object by splitting <strong>whitespace and special characters</strong>.
   * saves the greatest common word passed by reference (Integer greatestCounter).
   *
   * <ul>Use a regex generator for this : https://regexr.com/, https://docs.oracle.com/javase/6/docs/api/java/util/regex/Pattern.html
   * <li>  regex - any word ending in special characters and white space.</li>
   * <li> split will use regex</li>
   * </ul>
   * @param longString - String Input from client
   * @param greatestCounter - Integer passed by reference to fill in later
   * @return map - Map has counters to be used by Method greatestCommon(Map, Integer);
   * @see #getKeyByGreatestValue(Map, Integer)
   */
  private Map<String, Integer> bookIndex(String longString, AtomicInteger greatestCounter)
  {
    if(longString.isEmpty()) throw new RuntimeException("Empty Object");

    Map<String, Integer> map = new HashMap<>();

    for(String word : longString
      .replace("@", "at ")
      .replace("#", "number ")
      .toLowerCase()
      .split("\\W+")
    )
    {
      if(map.containsKey(word)) {
        map.replace(word, map.get(word) + 1);
        if(greatestCounter.get() < map.get(word))
        {
          greatestCounter.set( map.get(word));
        }
      }
      else//map does not contain word
        map.put(word, 1);
    }
    return map;
  }

  /**
   * Returns key based on value. value is
   * @param map - Map where key is String & value is occurrence
   * @param greatest - Integer that holds the biggest total repeated word.
   * @return key string that has the greatest value
   */
  private String getKeyByGreatestValue(Map<String, Integer> map, Integer greatest)
  {
    if(map.isEmpty()) throw new RuntimeException("Data Structure is an empty One to One Map.");
    for( Entry<String, Integer>  entry: map.entrySet())
    {
      if(entry.getValue().equals(greatest))
      {
        return entry.getKey();
      }

    }
    return null;
  }

}
