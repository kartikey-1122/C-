#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int* b = &a;
    cout<<"The address of A: "<<&a<<endl;
    cout<<"The value of A at addres B: "<<*b<<endl;
    cout<<"The valur of:"<<&(*b)<<endl;
    return 0;
}


