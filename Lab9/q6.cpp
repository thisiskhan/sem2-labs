#include <bits/stdc++.h>
using namespace std;
void sort(int *arr, int *a);
class merge_
{
    int *ptr1;
    int *ptr2;
    int len1, len2;
    char f_name1[100];
    char f_name2[100];
    char f_name3[100];

public:
    void setdata(int a, int b, char f_name1[], char f_name2[]);
    void getdata(char f_name3[]);
    friend void sort(int *arr, int n);
};
void merge_::setdata(int a, int b, char f_nameo1[100], char f_nameo2[100])
{
    len1 = a;
    len2 = b;
    strcpy(f_name1, f_nameo1);
    strcpy(f_name2, f_nameo2);
    int *ptr1 = new int[len1];
    int *ptr2 = new int[len2];
    cout << "Enter 1 list of integers :" << endl;
    for (int i = 0; i < len1; i++)
    {
        cout << "Enter " << i << " element :";
        cin >> ptr1[i];
    }
    sort(ptr1, &len1);
    cout << "Enter 2 list of integers :" << endl;
    for (int i = 0; i < len2; i++)
    {
        cout << "Enter " << i << " element :";
        cin >> ptr2[i];
    }
    sort(ptr2, &b);
    fstream file1, file2;
    file1.open(f_name1, ios::out);
    for (int i = 0; i < len1; i++)
    {
        file1 << ptr1[i] << " ";
    }
    file1.close();
    delete ptr1;
    file2.open(f_name2, ios::out);
    for (int i = 0; i < len2; i++)
    {
        file2 << ptr2[i] << " ";
    }
    file2.close();
    delete ptr2;
}
void merge_::getdata(char f_nameo3[100])
{
    strcpy(f_name3, f_nameo3);
    fstream file1(f_name1, ios::in);
    fstream file2(f_name2, ios::in);
    vector<int> vec1;
    int s;
    while (file1 >> s)
    {
        vec1.push_back(s);
    }
    file1.close();
    while (file2 >> s)
    {
        vec1.push_back(s);
    }
    file1.close();
    sort(vec1.begin(), vec1.end());
    fstream file3(f_name3, ios::out);
    for (int i = 0; i < vec1.size(); i++)
    {
        file3 << vec1[i];
        file3 << " ";
    }
    file3.close();
}
void sort(int *arr, int *n)
{
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *n - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                int temp;
                temp = *(arr + j + 1);
                *(arr + j + 1) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}
int main()
{
    merge_ m1;
    char a1[100], a2[100], a3[100];
    int n1, n2;
    cout << "Enter file 1 name :";
    fflush(stdin);
    gets(a1);
    cout << "Enter file 2 name :";
    fflush(stdin);
    gets(a2);
    cout << "Enter file 3 name :";
    fflush(stdin);
    gets(a3);
    cout << "Enter length of file1 & file 2 respectively ";
    cin >> n1 >> n2;
    m1.setdata(n1, n2, a1, a2);
    m1.getdata(a3);
    return 0;
}