#include <iostream>
using namespace std;
class concatenate
{
    string s;

public:
    void setstring(string s)
    {
        this->s = s;
    }
    void user_setstring()
    {
        cout << "Enter your own string : " << endl;
        getline(cin, s);
    }
    void display()
    {

        cout << s << endl
             << endl;
    }
    friend concatenate operator+(concatenate obj1, concatenate obj2)
    {
        concatenate temp_obj;
        temp_obj.s = (obj1.s).append(obj2.s);
        return temp_obj;
    }
};
int main()
{
    concatenate obj1, obj2, obj3;
    obj1.setstring("This code output is designed for the user : ");
    obj2.user_setstring();
    cout << endl
         << "String pre-defined is : " << endl;
    obj1.display();
    cout << "String given by the user is : " << endl;
    obj2.display();
    obj3 = obj1 + obj2;
    cout << "Concatenated string is : " << endl;
    obj3.display();
    return 0;
}