//Bamphiane Annie Phongphouthai
//bp8qg
//Sep 10, 2017
//postfixCalculator.h

#ifndef POSTFIXCALCULATOR_H
#define POSTFIXCALCULATOR_H

#include <iostream>
#include <stack>
using namespace std;

class postfixCalculator{
public:
    postfixCalculator(); //constructor
    bool isEmpty(stack<int>& stack);  //check to see if stack empty
    void pushInt(int i);   //push onto stack
    void add();       //add 2 top of stack when sees +
    void subtract();  //subtracts 2nd pop- 1st pop when sees - at top
    void multiply();  //multiply 2 top of stack when sees *
    void divide();    //divide 2nd popped/1st popped when sees /
    void negate();    //negates top of list once sees ~)
    int answer();     //returns the top of stack

 private:
    int x, y;             //variables when doing adding ex. 
    stack<int> s;  //using the stack given by STl

};
#endif
