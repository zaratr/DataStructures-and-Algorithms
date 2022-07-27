package datastructures.hashtables;

import java.util.Arrays;
import java.util.List;

public class RepeatedWord {

  public static String repeatedWord(String paragraph) throws IllegalAccessException {
    String[] words = paragraph.replace(",", "").replace(".", ".").toLowerCase().split(" ");
    System.out.println(Arrays.toString(words));
    HashMap<Object, Object> hashMap = new HashMap<>(10);
    for(String word:words)
    {
      if(hashMap.contains(word))
      {
        return word;
      }
      else{
        hashMap.set(word, 1);
      }
    }
    return null;
  }

  public static List<String> repeatedWOrdCount(String paragraph) throws IllegalAccessException {
    String[] words = paragraph.replace(",", "").replace(".", ".").toLowerCase().split(" ");
    HashMap<Object, Object> hashMap = new HashMap<>(10);
    for(String word:words) {
      if (hashMap.contains(word)) {
        Integer counter = (Integer) hashMap.get(word);
        hashMap.set(word, counter + 1);
      } else {
        Integer counter = 1;
        hashMap.set(word, counter);

      }
    }
    return hashMap.keyAndValues();
  }

}
