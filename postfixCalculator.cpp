//Bamphiane Annie Phongphouthai
//bp8qg
//Sep 10, 2017
//postfixCalculator.cpp
#include <iostream>
#include <stack>
#include "postfixCalculator.h"
#include <cstdlib>
using namespace std;

postfixCalculator::postfixCalculator(){ //default constructor
  
}

bool postfixCalculator::isEmpty(stack<int>& stack){ //check to see if stack empty
  if(stack.empty()==true){
    cout<< "Error:Stack is Empty"<<endl;
    exit(-1);
  }
  else{
    return false;
  }
}

void postfixCalculator::pushInt(int i){  //push int onto stack
  s.push(i);
  }

void postfixCalculator::add(){ //add
  if(!isEmpty(s)){ //check to see if stack
    x=s.top();
    s.pop();
    if (!isEmpty(s)){
      y=s.top();
      s.pop();
    }
  }
  s.push(y+x);
}

void postfixCalculator::subtract(){
  if(!isEmpty(s)){
    x=s.top();
    s.pop();
    if(!isEmpty(s)){
      y=s.top();
      s.pop();
    }
  }
  s.push(y-x);
}

void postfixCalculator::multiply(){
  if(!isEmpty(s)){
    x=s.top();
    s.pop();
    if(!isEmpty(s)){
      y=s.top();
      s.pop();
    }
  }
  s.push(y*x);
}	    

void postfixCalculator::divide(){
  if(!isEmpty(s)){
    x=s.top();
    s.pop();
    if(!isEmpty(s)){
      y=s.top();
      s.pop();
    }
  }
  s.push(y/x);
}

void postfixCalculator::negate(){
  if(!isEmpty(s)){
    x=s.top();
    s.pop();
  }
  s.push(-x);
}

int postfixCalculator::answer(){
    return s.top();
}
