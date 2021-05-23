#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 3, 4, 5}, arr2[] = {6, 7, 8, 9, 10}, arr3[10];
    ofstream fout, fout2, fout3;
    ifstream fin, fin2, fin3;
    fout.open("Source1");
    for (int i = 0; i < 5; i++)
    {
        fout.write((char *)&arr1[i], (sizeof(arr1[i])));
    }
    fout.close();
    fout.open("Source2");
    for (int i = 0; i < 5; i++)
    {
        fout.write((char *)&arr2[i], (sizeof(arr2[i])));
    }
    fout.close();
    fin.open("Source1");
    fout.open("Target");
    for (int i = 0; i < 5; i++)
    {
        fin.read((char *)&arr1[i], (sizeof(arr1[i])));
        fout.write((char *)&arr1[i], (sizeof(arr1[i])));
    }
    fin.close();
    fin.open("Source2");
    for (int i = 0; i < 5; i++)
    {
        fin.read((char *)&arr2[i], (sizeof(arr2[i])));
        fout.write((char *)&arr2[i], (sizeof(arr2[i])));
    }
    fin.close();
    fout.close();
    fin.open("Target", ios::in);
    for (int i = 0; i < 10; i++)
    {
        fin.read((char *)&arr3[i], (sizeof(arr3[i])));
        cout << arr3[i] << endl;
    }
    fin.close();
    return 0;
}