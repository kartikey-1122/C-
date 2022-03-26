#include<iostream>
using namespace std;
int main(){
int age;
cout<<"enter your age"<<endl;
cin>>age;
if(age>18){
cout<<"You are not eligible for party";
}
else if(age=18){
    cout<<"Still you are not eligible party";
}
else{
    cout<<"You can come to party!! Always welcome !!";
}

    return 0 ;
}