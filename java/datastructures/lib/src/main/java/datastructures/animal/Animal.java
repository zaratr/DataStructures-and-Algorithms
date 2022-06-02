package datastructures.animal;


import datastructures.linkedlist.Node;

import java.util.ArrayList;
import java.util.Random;


public class Animal {
  //problem set, limited amount of animals in a shelter
  private int animalDuration;
  private String type, name;

  public Animal(String type, String name) {
    this.type = type;
    this.name = name;


  }



  public void setAnimalDuration(int animalDuration) {
    this.animalDuration = animalDuration;
  }

  public void setName(String name) {
    this.name = name;
  }


  public void setType(String type) {
    this.type = type;
  }


  public int getAnimalDuration() {
    return animalDuration;
  }

  public String getName() {
    return name;
  }

  public String getType() {
    return type;
  }
}
