package datastructures.hashtable;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

import datastructures.leftjoin.LeftJoin;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

public class LeftJoinTest {

  boolean works;
  int truthy;
  @Test
  public void testLeftJoin()
  {
    HashMap<String, String> sut = new HashMap<>();
    HashMap<String, String> cmp = new HashMap<>();
    LeftJoin setList = new LeftJoin();

    sut.put("font",	"enamored");	cmp.put("font",	"averse");
    sut.put("wrath",	"anger");	 	cmp.put("wrath",	"delight");
    sut.put("diligent",	"employed");  cmp.put("diligent",	"idle");
    sut.put("outfit",	"garb");	 	cmp.put("flow",	"jam");
    sut.put("guide",	"usher");	 	cmp.put("guide",	"follow");

    List<List<String>> result = setList.leftJoin1(sut, cmp);
    List<List<String>> result2 = setList.leftJoin2(sut, cmp);

//    String expected = "["
//      + "[diligent, employed, idle], "
//      + "[outfit, garb, null], "
//      + "[wrath, anger, delight], "
//      + "[guide, usher, follow], "
//      + "[font, enamored, averse]"
//      + "]";
    List<String> expected = new ArrayList<>();
      expected.add("diligent, employed, idle");
      expected.add("outfit, garb, null");
      expected.add("wrath, anger, delight");
      expected.add("guide, usher, follow");
      expected.add("font, enamored, averse");

      works = false;
      truthy = 0;
  result.forEach( list -> {

    for(int i = 0; i < result.size(); ++i)
    {
      if(list.contains(expected.get(i)) == true )
      {
        truthy += 1;
        works =false;
      }
      else{
        truthy+= 0;
      }
    }
  });
  if(truthy == 5) works = true;
  assertTrue(works);
    return;
  };
}
