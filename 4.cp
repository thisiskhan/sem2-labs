#include <iostream>
using namespace std;

class student{
  protected:
	string name;
	int br_no;
	student() {}
	student(int b, string name) : name(name), br_no(b) {}
};
class CSE : private student{
	int CSE_sub1_marks, CSE_sub2_marks, CSE_sub3_marks;
  public:
	CSE() {}
	CSE(string name, int m1, int m2, int m3) : student(1, name), CSE_sub1_marks(m1), CSE_sub2_marks(m2), CSE_sub3_marks(m3) {}
	void display(){
		cout << "Branch Number -  " << br_no << " name - " << name << " CSE_sub1_marks " << CSE_sub1_marks << " CSE_sub2_marks " << CSE_sub2_marks << " CSE_sub3_marks " << CSE_sub3_marks << endl;
	}
};

class ECE : private student{
	int ECE_sub1_marks, ECE_sub2_marks, ECE_sub3_marks;
  public:
	ECE() {}
	ECE(string name, int m1, int m2, int m3) : student(1, name), ECE_sub1_marks(m1), ECE_sub2_marks(m2), ECE_sub3_marks(m3) {}
	void display(){
		cout << "Branch Number -  " << br_no << " name - " << name << " ECE_sub1_marks " << ECE_sub1_marks << " ECE_sub2_marks " << ECE_sub2_marks << " ECE_sub3_marks " << ECE_sub3_marks << endl;
	}
};

int main(){
	CSE a("hello",1,2,3),b("world",4,5,6),c("test",12,24,32);
	ECE d("1stobject",13,14,15),e("2ndobject",11,12,13);
	a.display();
	b.display();
	c.display();
	d.display();
	e.display();
	return 0;
}