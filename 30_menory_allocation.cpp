#include<iostream>
using namespace std;
class shop{
int itemId[100];
int itemPrice[100];
int counter;
public:
    void initCounter(void){ counter =0;}
    void setprice(void);
    void displayprice(void);
};
void shop :: setprice(void){
    cout<<"Enter id of your item "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item: "<<endl;
    cin>>itemPrice[counter];
    counter ++;
}
void shop :: displayprice(void){
    for(int i=0;i<counter;i++){
        cout<<"The price of item with id is "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main(){
    shop dukaan;
    dukaan.initCounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}