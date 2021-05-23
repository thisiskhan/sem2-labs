#include <iostream>
using namespace std;
class Rectangle
{
private:
    double length;
    double breadth;

public:
    Rectangle()
    {
        length = 7.2;
        breadth = 3.8;
    }
    Rectangle(double l, double b)
    {
        length = l;

        breadth = b;
    }
    Rectangle(double len)
    {
        length = len;
        breadth = 5.2;
    }
    double calculateArea()
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle r1, r2(4.5, 3.8), r3(13.7);
    cout << "When no argument is passed: " << endl;
    cout << "Area of rectangle = " << r1.calculateArea() << endl;
    cout << "\nWhen (4.5, 3.8) is passed." << endl;
    cout << "Area of rectangle = " << r2.calculateArea() << endl;
    cout << "\nWhen breadth is fixed to 6.9 and (13.7) is passed:" << endl;
    cout << "Area of rectangle = " << r3.calculateArea() << endl;
    return 0;
}