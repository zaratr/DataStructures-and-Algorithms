//
// Created by zarat on 2/2/2023.
//

#ifndef C___ENCAPSULATION_H
#define C___ENCAPSULATION_H


class Encapsulation {
public:
    Encapsulation();
    ~Encapsulation();
    int getNum();
    int setNum(int );
private:
    int num;
};

class Child1 : public Encapsulation{
public:
    Child1();
    ~Child1();

};

class Child2 : public Encapsulation{
public:
    Child2();
    ~Child2();
};




#endif //C___ENCAPSULATION_H
