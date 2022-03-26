#include <iostream>
using namespace std;
typedef struct office
{
    int workers;
    char rooms;
    float manager;
} of;
int main()
{
    of google;
    of me;
    me.rooms = 'z';
    me.workers = 55;
    cout << me.rooms << endl;
    cout << me.workers << endl;
    google.manager = 11062002;
    cout << google.manager << endl;
    google.rooms = 'A';
    cout << google.rooms << endl;
    google.workers = 85;
    cout << google.workers << endl;

    return 0;
}