#include <iostream>
using namespace std;
class Ex
{
public:
    int a;
    void add(Ex E)
    {
        a = a + E.a;
    }
};
int main()
{
    Ex E1, E2;
    E1.a = 50;
    E2.a = 100;
    cout << "Initial Values \n";
    cout << "Value of object 1: " << E1.a << "\n& object 2: " << E2.a << "\n\n";
    E2.add(E1);
    cout << "New values \n";
    cout << "Value of object 1: " << E1.a << "\n& object 2: " << E2.a << "\n\n";
    return 0;
}