#include<iostream> 
#include<stdio.h>  
using namespace std;  
class staff
{   
   int code;
  string name;  
    public:   
    
    void get() 
    { 
     cout<<"\n enter employee code:"; 
        cin>>code;
    cout<<"\n enter name of employee:"; 
    cin>>name; 
    
} 
void put() 
    {   cout<<"\n employee code:"<<code;
        cout<<"\n employee  name :"<<name; 
    }
    
  }; 
class teacher : public staff 
{
string s_publication; 
public: 
void getdata() 
{ 
  get(); 
cout<<"\n enter subject publication"; 
cin>>s_publication; 
}  
 void putdata(){ 
        put(); 
        cout<<"\n subject publication:"<<s_publication; 
        
    
} 
}; 
class typist:public staff 
{
int speed; 
public: 
void getdata() 
    { 
        get();
cout<<"\n enter typing speed:"; 
    cin>>speed; } 
void putdata() 
{ 
   put();
cout<<"\nspeed=word"<<speed<<"/min";; 
        }
    }; 
class officer: public staff 
{
char grade;  
    public: 
    void getdata() 
    {
    get(); 
    cout<<"\nenter grade of the officer"; 
    cin>>grade; 
        
} 
    void putdata() 
    { 
  put(); 
    cout<<"\n officer's grade:"<<grade; 
    }
} ;  
class regular: public typist 
{
public: 
void show() 
{
getdata();  
putdata(); 
} 
};
class casual : public typist 
{ 
   int d_wages; 
   public: 
    void getvalues() 
    { 
       getdata(); 
    cout<<"\n enter compensation of employee :"; 
    cin>>d_wages; 
        
} 
   void showvalues() 
    { 
      putdata();
    cout<<"\n compensation received as casual basis"<<d_wages;
}
}; 
int main () 
{ 
cout<<"--- Database of employees ---"; 
int b;
teacher A; 
regular B; 
casual C; 
officer D;    
    cout<<"\n 1.teacher";
    cout<<"\n 2.typist"; 
    cout<<"\n 3.officer"; 
    cout<<"\n enter your choice:"; 
    cin>>b;
switch(b)   
    { case 1: cout<<"\n  teacher's details ";
            A.getdata(); 
            A.putdata();  
            break; 
        case 2: cout<<"\n typist's details "; 
                int a; 
               cout<<"\n 1. regular typist"; 
               cout<<"\n 2.casual typist ";  
               cout<<"\n enter your choice:";
               cin>>a; 
               switch(a) 
        {
        case 1: 
    
               B.show();  
               break; 
        case 2: 
          C.getvalues(); 
           C.showvalues();  
            break; }
        break; 
        case 3:  
        cout<<"\n officer's details  "; 
       D.getdata(); 
      D.putdata();
     break; 
    
        } 
    return 0;
}