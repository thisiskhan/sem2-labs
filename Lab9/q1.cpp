#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    char ch = 'y';
    string arr;
    int count = 0;
    int noofline = 0;
    int noofwords = 0;
    int numofchar = 0;
    fout.open("TEXT.txt", ios::out | ios::binary);
    while (ch != 'n') // create and enter the text
    {
        cout << "Enter the line" << endl;
        getline(cin >> ws, arr);
        fout.write((char *)&arr, sizeof(arr));
        count++;
        cout << "Enter more (y/n) ";
        cin >> ch;
    }
    fout.close();
    fin.open("TEXT.txt");
    for (int i = 0; i < count; i++)
    {
        fin.read((char *)&arr, sizeof(arr));
        noofline++;
    }
    fin.close();
    fin.open("TEXT.txt");
    int i;
    while (fin)
    {
        fin.get(ch);
        i = ch;
        if ((i > 63 && i < 91) || (i > 96 && i < 123))
            numofchar++;
        else if (ch == ' ')
            noofwords++;
    }
    fin.close();
    cout << "number of lines = " << noofline;
    cout << endl;
    cout << "number of words = " << noofwords;
    cout << endl;
    cout << "number of characters " << numofchar;
    return 0;
}