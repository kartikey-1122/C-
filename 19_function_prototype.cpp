#include<iostream>
using namespace std;
int divide(float a,float b);
void print(void);
int main(){
    float num1,num2;
    cout<<"Enter first number"<<endl;
    cin >>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    divide(num1,num2);
    print();
    return 0;
}
int divide(float a , float b){
    float c = a/b;
    cout<<"Dividation of numbers is "<<c<<endl;
}
void print(void){
    cout<<"Your program was executed Sucessfully !!";
}