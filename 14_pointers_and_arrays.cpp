#include<iostream>
using namespace std;

int main(){
    int marks[]={45,50,55,60,65,70};
    int *p= marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    cout<<"The value of marks[4] is "<<*(p+4)<<endl;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    cout<<*(--p)<<endl;
    cout<<*(p--)<<endl;

    return 0;
}