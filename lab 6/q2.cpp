#include <iostream>
using namespace std;
class rational
{
    int numerator, denominator;
public:
    void getinput()
    {
        cout << "Enter the numerator and denominator :" << endl;
        cin >> numerator >> denominator;
        if (denominator == 0)
        {

            cout << "Invalid Input : "
                 << "(" << numerator << "/" << denominator << ")" << endl;
        }
    }
    void display()
    {
        cout << "(" << numerator << "/" << denominator << ")" << endl;
    }
    rational operator+(rational obj1)
    {
        rational temp_obj;
        temp_obj.numerator = (numerator * (obj1.denominator) + denominator * (obj1.numerator));
        temp_obj.denominator = (denominator * (obj1.denominator));
        return temp_obj;
    }
    rational operator-(rational obj1)
    {
        rational temp_obj;
        temp_obj.numerator = (numerator * (obj1.denominator) - denominator * (obj1.numerator));
        temp_obj.denominator = (denominator * (obj1.denominator));
        return temp_obj;
    }
    rational operator*(rational obj1)
    {
        rational temp_obj;
        temp_obj.numerator = (numerator * (obj1.numerator));
        temp_obj.denominator = (denominator * (obj1.denominator));
        return temp_obj;
    }
    rational operator/(rational obj1)
    {
        rational temp_obj;
        temp_obj.numerator = (numerator * (obj1.denominator));
        temp_obj.denominator = (denominator * (obj1.numerator));
        return temp_obj;
    }
};
int main()
{
    rational obj1, obj2, obj3;
    cout << "For 1st Fraction :" << endl;
    obj1.getinput();
    cout << endl
         << "For 2nd Fraction :" << endl;
    obj2.getinput();
    cout << endl
         << "1st Fraction is : ";
    obj1.display();
    cout << endl
         << "2nd Fraction is : ";
    obj2.display();
    cout << endl
         << "Addition of 1st and 2nd Fraction is : ";
    obj3 = obj1 + obj2;
    obj3.display();
    cout << endl
         << "Subtraction of 1st and 2nd Fraction is : ";
    obj3 = obj1 - obj2;
    obj3.display();
    cout << endl
         << "Multiplication of 1st and 2nd Fraction is : ";
    obj3 = obj1 * obj2;
    obj3.display();
    cout << endl
         << "Division of 1st and 2nd Fraction is : ";
    obj3 = obj1 / obj2;
    obj3.display();
    return 0;
}