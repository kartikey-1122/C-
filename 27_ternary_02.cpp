#include<iostream>
using namespace std;
int main()
{
float charge,additional,unit;
string name;
{
cout<<" Enter your name :"<< endl;
cin>>name;
cout<<" your unit consumed :"<< endl;
cin>>unit;
if(unit<=100)
{
charge=25+(75*unit)/100;
}
else if(unit<=200 && unit>100)
{
charge=25+(100*unit)/100;
}
else if(unit<=300 && unit>200)
{
charge=25+(125*unit)/100;
}
if(unit>=350)
{
additional=(charge*10)/100;
charge=charge+additional;
}
cout<<name<<endl;
cout<<charge<<" is your consumption"<<endl;
cout<<" Press o for exit / press 1 to input again :";

 return 0;
}
}