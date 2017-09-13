//Bamphiane Annie Phongphouthai
//bp8qg
//Sep 10, 2017
//testPostfixCalc.cpp
#include <iostream>
#include <stack>
#include "postfixCalculator.h"
#include <cstdlib>
#include <cstring>
using namespace std;
int main(){
    postfixCalculator p; //user wants to use calculator
    cout<<"Welcome, this is a postfix Calculator"<<endl<<
      "Enter values with space between each operator/operand"<<endl<<
      "Press Enter then Contrl-D when done"<<endl;
    string s;
    int x;
    const char* cstring= s.c_str();  //calling c_str()
    while(cin>>s){
      if(s==""){
	break;  //instead of cout<<s<endl;
      }
      if (s=="+"){
	p.add();
      }
      else if(s=="*"){
	p.multiply();
      }
      else if(s=="-"){
	p.subtract();
      }
      else if(s=="/"){
	p.divide();
      }
      else if(s=="~"){
	p.negate();
      }
      else{    //anything other than operator are going to be digits
	x=atoi(cstring);
	p.pushInt(x);
      }
    }
    /*
    p.pushInt(24);  //user enters in numbers and operation buttons
    p.pushInt(2);
    p.pushInt(3);
    p.pushInt(4);
    p.pushInt(5);
    p.add();            //5+4=9 current stack: 9,3,2,24
    p.subtract();       //3-9 =-6       stack:-6,2,24
    p.negate();         //-(-6)=6       stack: 6,2,24
    p.multiply();       //6*2=12        stack: 12,24
    p.divide();         //24/12=2       stack: 2      break here was fine
    */
    //continue to test more if wanted 
    /*p.pushInt(11);      //              stack: 11,2 
    p.multiply();       //11*2= 22      stack: 22
    p.pushInt(3);       //              stack: 3,22
    p.add();            //3+22= 25      stack: 25
    p.pushInt(5);       //              stack: 5,25
    p.divide();         //25/5=5        stack: 5
    p.pushInt(2);       //              stack: 2,5
    p.subtract();       //5-2=3         stack: 3
    p.negate();         //-3            stack: -3
    */
    cout << "Result is: "<< p.answer() << endl;   //should print out 2 then if continue print out -3
    return 0;
}
