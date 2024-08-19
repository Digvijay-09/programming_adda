/*program to make a calculator*/
#include<iostream>
using namespace std;
int main(){
    int r,num1,num2;
    char op;
cout<<"Enter first number:";
cin>>num1;
cout<<"Enter operator(+,-,*,/):";
cin>>op;
cout<<"Enter second number:";
cin>>num2;
switch(op){
    case '+':
    r=num1+num2;
    cout<<num1<<"+"<<num2<<"="<<r;
    break;
    case '-':
    r=num1-num2;
    cout<<num1<<"-"<<num2<<"="<<r;
    break;
    case '*':
    r=num1*num2;
    cout<<num1<<"*"<<num2<<"="<<r;
    break;
    case '/':
    r=num1/num2;
    cout<<num1<<"/"<<num2<<"="<<r;
break;
default:
cout<<"INVALID!";
}
return 0;
}
