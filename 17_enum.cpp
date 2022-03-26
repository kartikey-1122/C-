#include<iostream>
using namespace std;

int main(){
    enum program {c,java,ruby,html,css};
    cout<<c<<endl;
    cout<<java<<endl;
    program easy= html;
    cout<<easy<<endl;
    program hard = css;
    cout<<hard<<endl;
    program medium = ruby;
    cout<<medium;
    
    return 0;
}