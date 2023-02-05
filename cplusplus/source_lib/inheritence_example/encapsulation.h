//
// Created by zarat on 2/2/2023.
//

#ifndef C___ENCAPSULATION_H
#define C___ENCAPSULATION_H
#include <string>

//parent
class Encapsulation {
public:
    //constructor
    Encapsulation();//default
    Encapsulation(int );//overload 1
    //deconstructor
    ~Encapsulation();

    virtual int getValue();
    int setValue(int );
    virtual std::string getName();
    virtual double getId();
private:
    int value;
};

class Child1 : public Encapsulation{
public:
    //constructor
    Child1();//default
    Child1(int);//overload1 - passes value to parent
    Child1(int, std::string);//overload2 - passes value to parent but uses string in child1
    //deconstructor
    ~Child1();

    virtual std::string getName();
private:
    std::string name;

};

class Child2 : public Encapsulation{
public:
    //constructor
    Child2();//default
    Child2(int);//overload1 - one argument for id
    Child2(int, double);//overload 2 - two arguments and one is for the parent value member
    //deconstructor
    ~Child2();

    //member functions
    virtual double getId();

private:
    double id;
};




#endif //C___ENCAPSULATION_H
