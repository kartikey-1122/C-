#include<iostream>
using namespace std;
int c = 45;
int main(){
int a=10, b=15 ,c=40;
cout<<"The valur of a is "<< a << endl;
cout<<"The valur of b is "<< b << endl;
cout<<"The value of c is "<< c << endl;
cout<<"The value of global c is "<< ::c << endl;


    return 0;
}