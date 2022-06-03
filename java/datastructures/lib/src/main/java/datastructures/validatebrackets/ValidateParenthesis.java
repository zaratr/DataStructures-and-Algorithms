package datastructures.validatebrackets;

import java.util.HashMap;
import java.util.Stack;

public class ValidateParenthesis {
  private HashMap<Character, Character> types;
  public ValidateParenthesis(){
    this.types = new HashMap<>();
    this.types.put(')', '(');
    this.types.put('}', '{');
    this.types.put(']', '[');
  }
  public boolean isValid(String str)
  {
    Stack<Character> stack = new Stack<>();
    for(int i = 0; i < str.length(); ++i)
    {
      char c = str.charAt(i);
    if(this.types.containsKey(c)){
      char topElement = stack.empty()?'#':stack.pop();
      if(topElement != this.types.get(c))
      {
        return false;
      }
    }
    else{
        stack.push(c);
      }
    }
    return stack.isEmpty();
  }
}
