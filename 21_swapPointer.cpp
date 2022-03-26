#include<iostream>
using namespace std; 
int swaPointer(int* a, int* b){
    int temp= *a;
    *a=*b;
    *b=temp;
    cout<<"The value of a is "<<*a<<" and b is "<<*b<<" after swapping"<<endl;
}
int main(){
    int a=45,b=55;
    cout<<"The value of a is "<<a<<" and b is "<<b<<" before swapping"<<endl;
    swaPointer(&a,&b);
    

  



    return 0;
}