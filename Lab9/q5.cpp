
#include <bits/stdc++.h> using namespace std; class f_data{
int a;
int encrption_key;
char *ptr1;
char fname_1[100];

public:
void encryptdata(char f1[], int, int);
void getdata(char f1[]);
void decryptdata(char f1[]);
}
;
void f_data::encryptdata(char f_name1[100], int n1, int en_key)
{
    strcpy(fname_1, f_name1);
    a = n1;
    encrption_key = en_key;
    fstream file1(fname_1, ios::out);
    char *ptr1 = new char[n1];
    fflush(stdin);
    gets(ptr1);
    cout << "You encrypted data successfully...! :\n";
    for (int i = 0; i < strlen(ptr1); i++)
    {
        ptr1[i] += encrption_key;
        file1.put(ptr1[i]);
    }
    file1.close();
}
void f_data::decryptdata(char f_name1[])
{
    fstream file(f_name1, ios::in);
    char a;
    while (file >> a)
    {
        a -= encrption_key;
        cout << a;
    }
    file.close();
}
void f_data::getdata(char f_name[])
{
    fstream file(f_name, ios::in);
    char a;
    while (file >> a)
    {
        cout << a;
    }
    file.close();
}
int main()
{
    int a, length;
    f_data f1;
    char fn[100];
    cout << "Enter File Name :";
    fflush(stdin);
    gets(fn);
    cout << "Enter Data Length :";
    cin >> length;
    cout << "Enter Encrption Key :";
    cin >> a;
    f1.encryptdata(fn, length, a);
    cout << "Your Encrypted File :\n";
    f1.getdata(fn);
    cout << "\nDecypted File:\n";
    f1.decryptdata(fn);
    return 0;
}