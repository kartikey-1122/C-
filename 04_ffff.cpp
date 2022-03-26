#include<iostream>
using namespace std;
int main(){
    int num1 = 45;
    int &num2 = num1;
    cout<<num1<<endl;
    cout<<num2<<endl;
    return 0;
}