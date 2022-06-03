package datastructures.validatebrackets;

import java.util.Stack;

public class ValidParenth3 {

    public boolean isValid(String s)
    {
      //List<String> list = new ArrayList<>(Arrays.asList(s.split((""))));
      Stack<Character> stack = new Stack<>();
      //LinkedList<Character> list = new LinkedList<>();
      char [] arr = s.toCharArray();
      char [] opens = {'(', '[', '{',')', ']', '}'};

      boolean result = false;
      char check = ' ';
      int len = arr.length;
      if(len <= 1 || len % 2 != 0) return false;


      for(int i = 0; i < len; i++)
      {
        if(arr[i] == opens[0] || arr[i] == opens[1] || arr[i] == opens[2])
        {
          stack.push(arr[i]);
          //list.add(arr[i]);
        }
        if(stack.empty())
        //if(list.isEmpty())
        {
          return false;
        }
        check = stack.peek();
//        check = list.peekLast();
        if(arr[i] == opens[3] || arr[i] == opens[4] || arr[i] == opens[5])
        {
          if (arr[i] == opens[3] && check == opens[0])
          {
            stack.pop();
//            list.removeLast();
          }
          else if (arr[i] == opens[4] && check == opens[1])
          {
            stack.pop();
//            list.removeLast();
          }
          else if (arr[i] == opens[5] && check == opens[2])
          {
            stack.pop();
//            list.removeLast();
          }
          else
            return false;

        }
      }

      if(stack.isEmpty())
//      if(list.isEmpty())
        result = true;
      return result;
    }
}
