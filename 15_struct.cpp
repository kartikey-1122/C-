#include<iostream>
using namespace std;
struct program{
char language;
float hours;
int students;
};
int main(){
    struct program jayu ;
    jayu.language = 'c';
    jayu.hours = 9;
    jayu.students = 5;
    cout<<jayu.language<<endl;
    cout<<jayu.hours<<endl;
    cout<<jayu.students<<endl;
    

    
    return 0;
}