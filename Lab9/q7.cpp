#include <bits/stdc++.h>
using namespace std;
int main()
{
    char f_name[100];
    fflush(stdin);
    cout << "Enter File name :";
    gets(f_name);
    int a;
    do
    {
        cout << "-----Menu-----" << endl;
        cout << "Enter 1. to write data :" << endl;
        cout << "Enter 2. to read data :" << endl;
        cout << "Enter 3. to exit :" << endl;
        cout << "Enter choice :" << endl;
        cin >> a;
        if (a == 1)
        {
            vector<string> vec1;
            string s;
            cout << "Enter First Name :";
            cin >> s;
            vec1.push_back(s);
            cout << "Enter Second name :";
            cin >> s;
            vec1.push_back(s);
            cout << "Enter last name :";
            cin >> s;
            vec1.push_back(s);
            cout << "Enter employee number :";
            cin >> s;
            vec1.push_back(s);
            fstream file(f_name, ios::out | ios::app);
            for (int i = 0; i < vec1.size(); i++)
            {
                file << vec1[i];
                file << " ";
            }
            file.close();
        }
        else if (a == 2)
        {
            string s;
            fstream file(f_name, ios::in);
            while (file >> s)
            {
                cout << s;
                cout << endl;
            }
        }
    } while (a != 3);
    return 0;
}