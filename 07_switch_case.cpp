#include<iostream>
using namespace std;
int main(){
int num1, num2;
char symbol;
cout<<"Enter an operator: + - * /"<<endl;
cin>>symbol;
// in this case + - / * doesn't need an int float or anything else
cout<<"Enter the number"<<endl;
cin>>num1>>num2;
switch(symbol){
case '+' : 
cout<<"The addition of two numbers is: "<<num1+num2;
break;
case '-':
cout<<"The subtraction of numbers is: "<<num1-num2;
break;
case '*':
cout<<"The multiplication of numbers is: "<<num1*num2;
break;
case '/':
cout<<"The division of numbers is: "<<num1/num2;
break;
default:
cout<<"Choose approprite one !! ";
break;
}
return 0;
}






