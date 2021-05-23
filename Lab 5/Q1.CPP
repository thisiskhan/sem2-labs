#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int img;
    Complex()
    {
    }
    Complex(int r)
    {
        real = r;
        img = r;
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << "\t\t" << real << "+" << img << "i"
             << "\t\t" << endl;
    }
    void sum(Complex ob1, Complex ob2)
    {
        real = ob1.real + ob2.real;
        img = ob1.img + ob2.img;
    }
};
int main()
{
    int x, y, z;
    Complex a;
    cout << "\n\t\t********For equal values*********\t\t";
    cout << "\n\tEnter the equal value of real and imaginary part of complex number 1:\n\t";
    cin >> x;
    Complex b(x);
    cout << "\n\t\t********For different values********\t\t";
    cout << "\n\tEnter the real and imaginary part of complex number 2:\n\t";
    cin >> y >> z;
    Complex c(y, z);
    cout << "\t\t*******Sum of the two complex numbers is :********\t\t" << endl;

    a.sum(b, c);
    a.display();

    return 0;
}