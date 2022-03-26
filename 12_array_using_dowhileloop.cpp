#include<iostream>
using namespace std;

int main(){
    int marks[]={25,30,35,40,45};
    int i=0;
    do{
        cout<<"The marks of "<< i << " is "<<marks[i]<<endl;
        i++;
    }
    while(i<=4);
    return 0;
}