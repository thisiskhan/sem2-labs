#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string firstname[3];
    string middlename[3];
    string lastname[3];
    unsigned long empno[3];
    char ch = 'y';
    int count = 0, k;
    ifstream fin;
    ofstream fout;
    fout.open("myfile.dat");
    for (int i = 0; i < 3; i++)
    {
        cout << "first name : "
             << " ";
        cin >> firstname[i];
        fout << firstname[i] << '\n';
        cout << "middlename : ";
        cin >> middlename[i];
        fout << middlename[i] << '\n';
        cout << "Lastname : ";
        cin >> lastname[i];
        fout << lastname[i] << '\n';
        cout << "Employee no. : "
             << " ";
        cin >> empno[i];
        fout << empno[i] << '\n';
        count++;
        cout << "Enter more names (y/n)... ";
        cin >> ch;
        if (ch == 'n')
        {
            break;
        }
    }
    fout.close();
    fin.open("myfile.dat");
    k = count;
    for (int i = 0; i < k; i++)
    {
        fin >> firstname[i];
        cout << "First Name = " << firstname[i] << endl;
        fin >> middlename[i];
        cout << "Middle Name = " << middlename[i] << endl;
        fin >> lastname[i];
        cout << "Last name = " << lastname[i] << endl;
        fin >> empno[i];
        cout << "Employee number = " << empno[i] << endl;
    }
    fin.close();
    return 0;
}