#include<iostream>
using namespace std;
int multiply(int a,int b){
    int c = a*b;
    cout<<"The multiplication is "<< c;
    return c;
}
int main(){
int num1,num2;
cout<<"Enter first number"<<endl;
cin>>num1;
cout<<"Enter second number"<<endl;
cin>>num2;
multiply(num1,num2);

    return 0;
}