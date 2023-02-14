#include <iostream>

using namespace std;

class A{
	public:
		virtual void show(){
			cout << "Class A" << endl;
		}	
};

class B: public A{
	public:
		void show(){
			cout << "Class B" << endl;
		}	
};

class C: public A{
	public:
		void show(){
			cout << "Class C" << endl;
		}	
};


int main(){
	A *obj;
	
	B b;
	C c;
	
	obj = &b; obj->show();
	obj = &c; obj->show();
	
	return 0;
}
