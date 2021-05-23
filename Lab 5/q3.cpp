#include <iostream>
using namespace std;
class lab5q3
{
    int a;

public:
    lab5q3(int b = 0) : a(b)
    {
        cout << "Constructor Calls () constructor " << endl;
    }
    ~lab5q3()
    {
        cout << "Destructor Calls() destructor " << endl;
    }

public:
    void display(){
        cout << " HEY Raza " << endl;
    }
};
    int main()
    {

        cout << " HEY Raza " << endl;

        lab5q3 c;
        c.display();
    }

