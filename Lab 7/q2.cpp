#include<iostream>
#include<stdio.h>

using namespace std;
class student
{
        int roll;
        char name[25];
        public:
        void getdata()
        {
                cout<<"\n enter the student roll no.  ";
                cin>>roll;
                cout<<"\n enter the student name  ";
                cin>>name; 
        }
        void putdata()
        {
                cout<<"\n the student roll no: "<<roll;
                cout<<"\n the student name: "<<name;
        }
};
class exam: public student
{       float per;
        protected:
        int sub1;
        int sub2;
        int sub3; 
        int sub4; 
        int sub5; 
        int sub6; 
       
        public:

    void input()
        {
                getdata();
                cout<<"\n enter the marks1: ";
                cin>>sub1;
                cout<<"\n enter the marks2: ";
                cin>>sub2;
                cout<<"\n enter the marks3: ";
                cin>>sub3;  
             cout<<"enter marks4:"; 
                cin>>sub4;
                cout<<"\n enter the marks5: ";
                cin>>sub5;
                cout<<"\n enter the marks6: ";
                cin>>sub6; 
                     }
        void output()
        {
                putdata();
                cout<<"\n marks1: "<<sub1;
                cout<<"\n marks2: "<<sub2;
                cout<<"\n marks3: "<<sub3; 
                cout<<"\n marks4: "<<sub4;
                cout<<"\n marks5: "<<sub5;
                cout<<"\n marks6: "<<sub6;
        }
        void calculate ()
        {
                per= (sub1+sub2+sub3+sub4+sub5+sub6)/6;
                cout<<"\n total percentage  "<<per<<"%"<<"\n";
        }
}; 
class result: public exam   
{ 
public: 
int total_marks; 
void showresult() 
  {
        input(); 
        output(); 
        total_marks=sub1+sub2+sub3+sub4+sub5+sub6; 
        cout<<"\n total marks obtained out of 600:"<<total_marks; 
        calculate(); 
        
    } 
};

int main()
{
       result m1; 
    m1.showresult(); 
    return 0; 
    
       
}