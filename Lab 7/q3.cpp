#include<iostream> 
using namespace std;
class Student {
protected:
string school_name,university_name,highest_degree;
public:
void std_details()
{
cout<<"Enter the name of School : "<<endl;
getline(cin,school_name);
cout<<"Enter the name of University : "<<endl; getline(cin,university_name);
cout<<"Enter the name of Highest degree obtained : "<<endl; getline(cin,highest_degree); }
void display_Student()
{ cout<<"The name of School is : "<<school_name<<endl;
cout<<"The name of University is : "<<university_name<<endl;
cout<<"The name of Highest degree obtained is : "<<highest_degree<<endl; } };
class employee {
protected:
string emp_name;
int emp_id;
public:
void emp_details()
{ cout<<"Enter the Employee name : "<<endl; getline(cin,emp_name);
cout<<"Enter the Employee id : "<<endl; cin>>emp_id; cin.ignore(); }
void display_employee()
{
cout<<"The Employee name is : "<<emp_name<<endl; cout<<"The Employee ID is : "<<emp_id<<endl; } };
class manager :public employee, public Student {
 protected:
string designation;
float dues;
public:
void manager_details()
{ cout<<"Enter the designation of the Manager : "<<endl; getline(cin,designation);
cout<<"Enter the dues of Manager : "<<endl; cin>>dues;
cin.ignore();
}
void display_manager()
 {
cout<<"The designation of the Manager is : "<<designation<<endl; cout<<"The dues of the Manager is : "<<dues<<endl; }
};
class scientist : public employee , public Student {
protected: int publication_num;
public:
void set_member_scientist()
{
cout<<"Enter the number of publications of Scientist : "<<endl; cin>>publication_num; cin.ignore(); }
void display_scientist()
{ cout<<"The number of publications of Scientis are : "<<publication_num<<endl;
}
};
class laborer : public employee {};
int main() {
int man,sci,lab;
cout<<"Enter the details of the Manager : "<<endl<<endl; cout<<"Enter the number of employee working as Manager : "; cin>>man;
cin.ignore();
 manager manager1[10];
for(int i=0;i<man;i++)
{
manager1[i].emp_details();
manager1[i].std_details();
manager1[i].manager_details(); }
cout<<endl<<"Enter the details of the Scientist : "<<endl; cout<<"Enter the number of employee working as Scientist : "; cin>>sci;
cin.ignore();

scientist scientist1[10];
for(int i=0;i<sci;i++)
{
scientist1[i].emp_details(); scientist1[i].std_details(); scientist1[i].set_member_scientist(); }
cout<<endl<<"Enter the details of the Labourer : "<<endl; cout<<"Enter the number of employee working as Labourer : "; cin>>lab;
cin.ignore();
laborer laborer1[10];
for(int i=0;i<lab;i++)
{ laborer1[i].emp_details(); }
cout<<endl<<endl<<"The details of the managers are : "<<endl<<endl; for(int i=0;i<man;i++)
{ manager1[i].display_Student();
manager1[i].display_employee();
manager1[i].display_manager();
cout<<endl; }
cout<<endl<<"The details of the scientists are : "<<endl<<endl; for(int i=0;i<sci;i++)
{ scientist1[i].display_Student(); scientist1[i].display_employee(); scientist1[i].display_scientist();
cout<<endl; }
cout<<endl<<"The details of the labourers are : "<<endl<<endl; for(int i=0;i<lab;i++)
{ laborer1[i].display_employee();
}
return 0;
}