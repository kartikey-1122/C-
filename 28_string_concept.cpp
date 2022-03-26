#include <iostream>
using namespace std;
void extractchar(string z){
    char a;
    for(int i=0;i<z.length();i++){
        a=z.at(i);
        cout<<a<<" ";
    }
}
int main (){
    string t("KartikeyPatil");
    extractchar(t);

    return 0;
}