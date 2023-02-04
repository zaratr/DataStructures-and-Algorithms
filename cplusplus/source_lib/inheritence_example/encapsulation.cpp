//
// Created by zarat on 2/2/2023.
//

#include "encapsulation.h"
#include <iostream>
using namespace std;

Encapsulation :: Encapsulation(): data(0)
{}

Encapsulation :: ~Encapsulation() {

}

int Encapsulation::getData() {
    return this->data;
}

int Encapsulation :: setData(int data){
    this->data = data;
}

Child1 ::Child1()
{}

