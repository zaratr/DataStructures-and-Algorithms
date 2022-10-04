package datastructures.hashtable;
import datastructures.uniquecharacters.UniqueCharacters;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;
public class UniqueCharactersTest {

  @Test
  public void uniqueCharTest()
  {
    String test1 = "The quick brown fox jumps over the lazy dog";
    String test2 = "I love cats";
    String test3 = "Donald the duck";
    UniqueCharacters sut1 = new UniqueCharacters();
    assertEquals(false, sut1.uniqueCharacters(test1));
    assertEquals(true, sut1.uniqueCharacters(test2));
    assertEquals(false, sut1.uniqueCharacters(test3));
    return;

  }
}
