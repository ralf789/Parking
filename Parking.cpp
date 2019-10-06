/**** Parking 
 * From 1AM to 7AM The hourly rate is $1
 * From 8AM to 17PM The hourly rate is $2
 * From 18PM to 0AM The hourly rate is $1
 * ***/

#include <iostream>

using namespace std;

int main(){
	
	/***Parking**/
	
   int T_price(int h1, int h2);
   int hd, ht;
        cout << "When did you park (an integer)? ";
        cin >> hd;
        cout << "\n";
        cout << "When are you coming back (an integer)? ";
        cin >> ht;
        cout << "\n";
        
        /**Error Messages**/
        
        if((hd > 24 and hd < 0) and (ht > 24 and ht < 0)){
            cout << "sir/ma'ma there is only 24h in a day !\n";
        }
        else if(hd > ht){
            cout << "You are not allowed to go back in time \n";
        }
        else if(hd == ht){
            cout << "You can't park for less than 1 hour !\n";
        }
        
        else{
          cout << "The amount that you have to pay is " << T_price(hd, ht) << " $.\n";
        }
    
    return 0;
}
 
int T_price(int h1, int h2)
{
    int amount;
    if(h1 >= 0 and h1<=7){
        if(h2 > 0 and h2 <= 7){
            cout  << h2-h1 << " hour(s) at the hourlyrate of $1.\n";
            amount = h2-h1;
        }
        else if(h2 > 7 and h2 <= 17){
            cout << 7-h1 << "  hour(s) at the hourlyrate of $1.\n";
            cout << h2-7 << " hour(s) at the hourlyrate of $2).\n";
            amount = (h2-7)*2 + (7-h1);
        }
        else if(h2 > 17 and h2 <= 24){
            cout << 7-h1 <<" hour(s) at the hourlyrate of $1.\n";
            cout << "hour(s) at the hourlyrate of $2.\n";
            cout << h2-17 <<" hour(s) at the hourlyrate of $1.\n";
            amount = (h2-17) + (10*2) + (7-h1);
        }
    }
    else if(h1 > 7 and h1 <= 17){
        if(h2 > 7 and h2 <= 17){
            cout << h2-h1 << " hour(s) at the hourlyrate of $2.\n";
            amount = (h2-h1)*2;
        }
        else if(h2 > 17 and h2 <= 24){
            cout << 17-h1 << " hour(s) at the hourlyrate of $2.\n";
            cout << h2-17 << " hour(s) at the hourlyrate of $1.\n";
            amount = (h2-17) + (17-h1)*2;
        }
    }
    else{
        cout << h2-h1 << " hour(s) at the hourlyrate of $1.\n";
        amount = h2-h1;
    }
    return amount;   
   


}
