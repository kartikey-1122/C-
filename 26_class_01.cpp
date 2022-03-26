#include <iostream>
using namespace std;
class employe
{
    private:
    int a,b,c;
    // The class members declared as private can be accessed only by the functions inside the class.
    public:
    int d,e;
    // Accessible for everyone
    void setData(int a1,int b1,int c1);
    void getData(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
};
void employe :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main (){
      employe kp;
    //   kp.a=45; this will throw errror because a is private variable we cannot use private variable directly
      kp.d=34;
      kp.e=89;
      kp.setData(1,2,4);
      kp.getData();
    return 0;
}  