#include<iostream>
using namespace std;
int swap(int a , int b){
    int temp =a ;
    a = b;
    b =temp; 
    
}
int main(){
    int num1=5, num2 = 6;
    cout<<"The values of Num1 is "<<num1<<" and Num2 is "<<num2<<" before swapping"<<endl;
    swap(num1,num2);
    cout<<"The value of Num1 is "<<num1<<" and Num2 is "<<num2<<" After swapping "<<endl;

  
    
    
    return 0;
    
}