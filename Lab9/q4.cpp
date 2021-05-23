#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string str, strr[4];
    int count = 0, k;
    char ch, chr = 'y';
    ofstream fout;
    ifstream fin;
    fout.open("filestr.dat");
    while (chr != 'n')
    {
        cout << "Sentence : ";
        getline(cin >> ws, str);
        fout.write((char *)&str, (sizeof(str)));
        count++;
        cout << "Enter more(y/n)...";
        cin >> chr;
    }
    fout.close();
    k = count;
    fin.open("filestr.dat");
    for (int i = 0; i < k; i++)
    {
        fin.read((char *)&str, (sizeof(str)));
        strr[i] = str;
    }
    fin.close();
    for (int i = 0; i < k; i++)
    {
        cout << strr[i] << endl;
    }
    return 0;
}