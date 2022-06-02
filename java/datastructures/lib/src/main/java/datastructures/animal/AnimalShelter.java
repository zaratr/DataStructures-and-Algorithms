package datastructures.animal;


import datastructures.queue.PseudoQueue;
import datastructures.stack.Stack;

import java.util.HashMap;
import java.util.Map;
import java.util.Random;
import java.util.Set;

public class AnimalShelter  extends PseudoQueue {
  //public static ArrayList<Integer> RosterLengthatShelter;
  public HashMap<Integer, Animal> animalRoster;

  public AnimalShelter() {
    super();
    animalRoster = new HashMap<>();
  }
  public void setRoster(Animal value){

    boolean isSameOrDone = false;
    while(isSameOrDone == false)
    {
      int animalDuration = generateKey();

      if(animalRoster.isEmpty() || !animalRoster.containsKey(animalDuration))
      {
        value.setAnimalDuration(animalDuration);
        animalRoster.put(animalDuration, value);
        isSameOrDone = true;

      }
    }
  }

  public int generateKey()
  {
    final int MIN=0, //min in shelter
      MAX=50;//max in shelter
    int x = new Random().nextInt(MAX - MIN + 1) + MIN;
    return x;
  }


  public void enqueue(Animal data)
  {
    if(data == null) return;
    setRoster(data);
    enqueue(data.getAnimalDuration());
  }
  public Animal dequeue(String pref)
  {
    //base case
    if(!(pref.equals("Cat") || pref.equals("Dog")) ) return null;

    //local variables
    int adoptMe = 0;

    //else - we are a Dog or Cat
    if(pref.equals("Dog"))
    {
      while(t1.top != null)
      {
        if(animalRoster.get(t1.peek()).getType().equals("Dog"))
        {
          adoptMe = t1.pop();
          break;
        }
        else
        {
          t2.push(t1.pop());
        }
      }
      while(t2.top!=null)
      {
        t1.push(t2.pop());
      }
    }
    else if(pref.equals("Cat"))
    {
      while(t1.top != null)
      {
        if(animalRoster.get(t1.peek()).getType().equals("Cat"))
        {
          adoptMe = t1.pop();
          break;
        }
        else
        {
          t2.push(t1.pop());
        }
      }
      while(t2.top!=null)
      {
        t1.push(t2.pop());
      }

    }

    return animalRoster.get(adoptMe);
  }
  @Override
  public String toString()
  {
    String toDisplay = "";
    int x = 0;
    Stack current = t1;
    for(Map.Entry<Integer, Animal> set : animalRoster.entrySet())
    {
      toDisplay += "[" +
        set.getValue()
        + "] -> ";
      //current.top = current.top.getNext();
    }
    return toDisplay + "NULL";
  }

  /*
 */
}
