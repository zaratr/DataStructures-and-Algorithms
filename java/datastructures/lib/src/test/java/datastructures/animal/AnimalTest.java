package datastructures.animal;
import datastructures.animal.*;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

public class AnimalTest {

  @Test
  public void testEnqueue1()
  {

    AnimalShelter sut = new AnimalShelter();
    Animal smellyCat = new Animal("Cat", "smellyCat");
    sut.enqueue(new Animal("Dog", "foo"));
    sut.enqueue(smellyCat);
    sut.enqueue(new Animal("Cat", "catdog"));
    assertNotNull(sut.peek());
  }

  @Test
  public void testDequeue()
  {
    AnimalShelter sut = new AnimalShelter();
    Animal smellyCat = new Animal("Cat", "smellyCat");
    sut.enqueue(new Animal("Dog", "foo"));
    sut.enqueue(smellyCat);
    sut.enqueue(new Animal("Cat", "catdog"));
    sut.dequeue("Dog");
    assertNotNull(sut.peek());
    return;
  }

  @Test
  public void testDequeueAll()
  {
    AnimalShelter sut = new AnimalShelter();
    Animal smellyCat = new Animal("Cat","bar");
    sut.enqueue(new Animal("Dog", "foo"));
    sut.enqueue(smellyCat);
    sut.enqueue(new Animal("Dog", "johnson"));
    sut.dequeue("Dog");
    sut.dequeue("Cat");
    assertNotNull(sut.peek());
    return;

  }

}




