#include<iostream> 
using namespace std; 
class mother{ 
public: 
void display() 
{ 
cout<<"mother class"<<"\n"; 
} 
}; 
class daughter:public mother 
{ 
public: 
void display() 
{cout<<"daughter class"<<"\n"; 
mother::display(); 
}}; 
int main() 
{ 
daughter obj; 
obj.display(); 
return 0; 
}