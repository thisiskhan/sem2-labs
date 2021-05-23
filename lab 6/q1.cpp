#include <iostream>
using namespace std;
class Distance
{
    int feet, inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    void getinput(int feet, int inches)
    {
        this->feet = feet;
        this->inches = inches;
    }
    int check()
    {
        if (inches > 12)
        {
            feet = feet + (inches / 12);
            inches = inches % 12;
        }
        else
        {
            inches = inches;
        }
    }
    void display()
    {
        cout << "Feet=" << feet << " and Inches=" << inches << endl;
    }
    Distance operator-(Distance obj)
    {
        Distance temp_obj;
        temp_obj.feet = feet - obj.feet;
        temp_obj.inches = inches - obj.inches;
        return (temp_obj);
    }
    Distance operator+(Distance obj)
    {
        Distance temp_obj;
        temp_obj.feet = feet + obj.feet;
        temp_obj.inches = inches + obj.inches;
        return (temp_obj);
    }
    friend Distance operator+=(Distance obj1, Distance obj2)
    {
        obj1.feet += obj2.feet;
        obj1.inches += obj2.inches;
        return obj1;
    }
    friend Distance operator-=(Distance obj1, Distance obj2)
    {
        obj1.feet -= obj2.feet;
        obj1.inches -= obj2.inches;
        return obj1;
    }
    Distance operator>(Distance obj)
    {
        Distance temp_obj;
        if (feet > obj.feet)
        {
            temp_obj.feet = feet;
        }
        else
        {
            temp_obj.feet = obj.feet;
        }
        if (inches > obj.inches)
        {
            temp_obj.inches = inches;
        }
        else
        {
            temp_obj.inches = obj.inches;
        }
        return (temp_obj);
    }
    Distance operator<(Distance obj)
    {
        Distance temp_obj;
        if (feet < obj.feet)
        {
            temp_obj.feet = feet;
        }
        else
        {
            temp_obj.feet = obj.feet;
        }
        if (inches < obj.inches)
        {
            temp_obj.inches = inches;
        }
        else
        {
            temp_obj.inches = obj.inches;
        }
        return (temp_obj);
    }
};
int main()
{
    Distance obj1, obj2, obj3;
    cout << "1st distance before assigning any value in feet and inches is : " << endl;
    obj1.display();
    cout << "2nd distance before assigning any value in feet and inches is : " << endl;
    obj2.display();
    obj1.getinput(9, 2);
    cout << "1st distance after assigning value in feet and inches is : " << endl;
    obj1.display();
    obj2.getinput(6, 13);
    cout << "2nd distance after assigning value in feet and inches is : " << endl;
    obj2.display();
    obj2.check();
    obj1.check();
    cout << "Checking if given inches is greater than 12inch in 1st distance, if yes then converting it in feet : " << endl;
    obj1.display();
    cout << "Checking if given inches is greater than 12inch in 1st distance, if yes then converting it in feet : " << endl;
    obj2.display();
    obj3 = obj1 + obj2;
    cout << "1st distance + 2nd distance in feet and inches is : " << endl;
    obj3.display();
    obj3 = obj1 - obj2;
    cout << "1st distance - 2nd distance in feet and inches is : " << endl;
    obj3.display();
    obj3 = (obj1 += obj2);
    cout << "1st distance += 2nd distance in feet and inches is : " << endl;
    obj3.display();
    obj3 = (obj1 -= obj2);
    cout << "1st distance -= 2nd distance in feet and inches is : " << endl;
    obj3.display();
    obj3 = obj1 > obj2;
    cout << "The distance that is greater in between 1st distance and 2nd distance in feet and inches is : " << endl;
    obj3.display();
    obj3 = obj1 < obj2;
    cout << "The distance that is smaller in between 1st distance and 2nd distance in feet and inches is : " << endl;
    obj3.display();
    return 0;
}