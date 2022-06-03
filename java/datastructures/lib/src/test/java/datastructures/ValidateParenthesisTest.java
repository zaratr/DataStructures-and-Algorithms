package datastructures;

import datastructures.validatebrackets.ValidParenth3;
import datastructures.validatebrackets.ValidateParenth;
import datastructures.validatebrackets.ValidateParenthesis;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertTrue;

public class ValidateParenthesisTest {

  final String s1 = "()";
  final String s2 = "()[]{}";
  final String s3 = "(]" ;
  @Test
  public void testValid1()
  {
    ValidateParenthesis sut = new ValidateParenthesis();
    assertTrue(sut.isValid(s1));
    assertTrue(sut.isValid(s2));
    assertTrue(!sut.isValid(s3));
  }

  @Test
  public void testValid2()
  {
    ValidateParenth sut = new ValidateParenth();
    assertTrue(sut.isValid(s1));
    assertTrue(sut.isValid(s2));
    assertTrue(!sut.isValid(s3));
  }

  @Test
  public void testValid3()
  {
    ValidParenth3 sut = new ValidParenth3();

    assertTrue(sut.isValid(s1));
    assertTrue(sut.isValid(s2));
    assertTrue(!sut.isValid(s3));
  }

  @Test
  public void testBigOne()
  {
    ValidateParenthesis test1 = new ValidateParenthesis();
    ValidateParenth test2 = new ValidateParenth();
    ValidParenth3 test3 = new ValidParenth3();

    assertTrue(!test1.isValid("([}}])"));
    assertTrue(test1.isValid("{[[]{}]}()()"));

    assertTrue(!test2.isValid("([}}])"));
    assertTrue(test2.isValid("{[[]{}]}()()"));

    assertTrue(!test3.isValid("([}}])"));
    assertTrue(test3.isValid("{[[]{}]}()()"));


  }

}
