/*
Accept cost price(CP) and Selling price(SP) of an item. Calculate the ammount of PROFIT/LOSS made by the seller and print the Result.

Hints => Input : CP=500, SP=700              Output : PROFIT=200
         Input : CP=500, SP=450              Output : LOSS=50                
*/

#include <iostream>

using namespace std;
  
int main()  
{  
    int cp, sp;  
  
    cout<<"Enter the CP of the product is : ";  
    cin>>cp;  
  
    cout<<"Enter the SP of the product is : ";  
    cin>>sp;   
  
    if(sp > cp)  
    {  
        cout<<"Profit is : " <<(sp-cp);  
    }  
    else if(cp > sp)  
    {  
        cout<<"Loss is : " <<  (cp-sp);  
    }  
    else  
    {  
        cout<<"Neither profit & nor loss ";  
    }  
  
    return 0;  
}  