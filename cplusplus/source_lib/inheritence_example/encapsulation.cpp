//
// Created by zarat on 2/2/2023.
//

#include "encapsulation.h"
#include <iostream>
using namespace std;

Encapsulation :: Encapsulation(): num(0)
{}

Encapsulation :: ~Encapsulation() {

}

int Encapsulation::getNum() {
    return this->num;
}

int Encapsulation :: setNum(int num){
    this->num = num;
}

Child1 ::Child1()
{}
