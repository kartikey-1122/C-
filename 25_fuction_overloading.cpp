#include <iostream>
using namespace std;
// int sum(int a,int b,int c){
//     return a+b+c;
// }
// int sum(int a,int b){
//    return a+b;
// }
int volume(int l, int b, int h)
{
    return l * b * h;
}
int volume(int a)
{
    return a * a * a;
}
int volume(int r, int h)
{
    return 3.14 * r * r * h;
}

int main()
{
    cout << "THe voulume of box having 3,5 and 6 is " << volume(3, 5, 6) << endl;
    cout << "The volume of cube having side 5 is " << volume(5) << endl;
    cout << "The volume of Dumdum having 5 and 6 is " << volume(5, 6) << endl;
    return 0;
}