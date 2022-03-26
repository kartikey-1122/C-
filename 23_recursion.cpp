#include <iostream>
using namespace std;
int factorial(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    return a *factorial(a - 1);
}
int main()
{
    int n;
    cout<<"Enter a Number: "<<endl;
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n);

    return 0;
}