#include<iostream>
using namespace std;
int main(){
    class shop{
    int itemId[100];
    int itemPrice[100];
    counter;
    public: 
    void initcounter(){ counter =0;}
    void setPrice(void);
    void Displayprice(void);
    };
    void shop :: setPrice(void){
         cout<<"Enter the id of item "<<counter +1 <<endl;
         cin>>itemId[counter];
         cout<<"Enter price of item "<<endl;
         cin>>itemPrice[counter];
         counter ++ ;
    }
    void shop :: Displayprice(void){
         for (int i=0;i<counter;i++){
           cout<<"The id of item is "<<itemId[i]<<" with price is "<<itemPrice[i]<<endl;
         }
    }
  int main(){
    initCounter();
    setPrice();
    setPrice();
    setPrice();
    Displayprice();
    
  return 0;
  }