#include <iostream>
#include <cstdlib>

using namespace std;
int flip();
int main()
{
    int coin, countrt, tails = 0, heads = 0;
  
    for (countrt = 0; countrt <= 100; countrt++)
    {
         coin = flip ();
        if (coin == 0)
        {
           cout<<"T ";
           tails = tails +1;
        }
        else if(coin == 1)
        {
            cout<<"H ";
            heads = heads +1;
        }
    }
        cout << "Head appears " <<tails<< " time. " << endl;
        cout << "Head apperas " <<heads<< " time. " << endl;
       

    }
int flip(){
    return rand() % 2;
    
}


