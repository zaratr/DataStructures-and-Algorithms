package datastructures.validatebrackets;

import java.util.LinkedList;

public class ValidateParenth {


  public boolean isValid (String s){
    //List<String> list = new ArrayList<>(Arrays.asList(s.split((""))));
    LinkedList<Character> list = new LinkedList<>();
    char[] arr = s.toCharArray();

    boolean result = false;
    char check = ' ';
    int len = arr.length;
    if (len <= 1 || len % 2 != 0) return false;


    for (int i = 0; i < len; i++) {
      if (arr[i] == '(' || arr[i] == '[' || arr[i] == '{') {
        //stack.push(arr[i]);
        list.add(arr[i]);
      }
      if (list.isEmpty()) {
        return false;
      }
      check = list.peekLast();
      if (arr[i] == ')' || arr[i] == ']' || arr[i] == '}') {
        if (arr[i] == ')' && check == '(') {
          list.removeLast();
        } else if (arr[i] == ']' && check == '[') {
          //stack.pop();
          list.removeLast();
        } else if (arr[i] == '}' && check == '{') {
          //stack.pop();
          list.removeLast();
        } else
          return false;

      }
    }

    if (list.isEmpty())
      result = true;
    return result;
  }
}
