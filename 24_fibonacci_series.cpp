// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
#include<iostream>
using namespace std;
int fib(int a ){
    if(a<2){
        return 1;
    }
    else{
        return fib(a-2)+fib(a-1);
    }
}
int main (){
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    cout<<"The "<<n<<"th term of fibonacci series is "<<fib(n)<<endl;
    return 0;
}