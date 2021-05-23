#include <iostream>
using namespace std;

class FLOAT{
	float a;
  public:
	FLOAT() {}
	FLOAT(float a) : a(a) {}
	FLOAT operator+(FLOAT y){
		FLOAT temp;
		temp.a = a + y.a;
		return temp;
	}
	FLOAT operator-(FLOAT y){
		FLOAT temp;
		temp.a = a - y.a;
		return temp;
	}
	FLOAT operator*(FLOAT y){
		FLOAT temp;
		temp.a = a * y.a;
		return temp;
	}
	FLOAT operator/(FLOAT y){
		FLOAT temp;
		try{
			if (y.a == 0){
				throw y.a;
			}
		}
		catch (float a){
			cout << "division by zero" << endl;
			return *this;
		}
		temp.a = a / y.a;
		return temp;
	}
	void display(){
		cout << a << endl;
	}
};
int main(){
	FLOAT a(4), b(0), c, d, e, f;
	c = a + b;
	c.display();
	d = a - b;
	d.display();
	e = a * b;
	e.display();
	f = a / b;
	f.display();
	return 0;
}