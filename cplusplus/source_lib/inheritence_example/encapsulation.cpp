//
// Created by zarat on 2/2/2023.
//

#include "encapsulation.h"
#include <iostream>
using namespace std;

Encapsulation :: Encapsulation(): value(0){}

Encapsulation :: Encapsulation(int value): value(value){}

Encapsulation :: ~Encapsulation(){}

int Encapsulation::getValue() {return this->value;}

int Encapsulation :: setValue(int value){this->value = value;}

string Encapsulation:: getName(){}
double Encapsulation:: getId(){}

//CHILD1
//CONSTRUCTORS
Child1 ::Child1(){}
Child1 :: Child1(int value): Encapsulation(value){}
Child1 ::Child1(int value, string name) : Encapsulation(value), name(name){}

//DESTRUCTOR
Child1 :: ~Child1(){}

//MEMBER FUNCTIONS
string Child1 :: getName(){return this->name;}

//CHILD2
//CONSTRUCTORS
Child2 ::Child2(){}
Child2 ::Child2(int value) : Encapsulation(value){}
Child2 ::Child2(int value, double userId) : Encapsulation(value), id(userId){}

//DESTRUCTOR
Child2 ::~Child2() {}

//MEMBER FUNCTIONS
double Child2 ::getId() {return this->id;}