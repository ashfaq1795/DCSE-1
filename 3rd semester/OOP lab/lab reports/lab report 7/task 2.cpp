
#include<iostream>
using namespace std;

class Time {
	private:
	int s, m, h;
	public:
		Time(){ 
		h = 0; m = 0; s = 0;
		 }
		Time(int n1, int min, int sec) {
	h = n1;
	m = min;
	s = sec;
		}
		void show() {
	cout<<h<<":"<<m<<":"<<s<<endl;
}
		friend Time operator+(Time, Time);
		friend Time operator++(Time);		

		friend Time operator--(Time);		

};

Time operator+(Time t1, Time t2) {
	int hrs = t1.h + t2.h;
	int min = t1.m + t2.m;
	int sec = t1.s + t2.s;
	if(sec > 59) {
		sec = sec % 60;
		min++;
	}
	if(min > 59) {
		min = min % 60;
		hrs++;
	}
	Time returnvalue(hrs, min, sec);
	return returnvalue;
}

Time operator++(Time t) {
	t.s++;
	if(t.s > 59) {
		t.m++;
		t.s %= 60;
	}
	if(t.m > 59) {
		t.h++;
		t.m %= 60;
	}
	return t;
}



Time operator--(Time t) {
	if(t.s == 0) {
		if(t.m == 0) {
			t.m = 59;
			t.h--;
		}else {
			t.m--;
		}
		t.s = 59;
	}else {
		t.s--;
	}
	return t;
}


int main() {
	Time t1(10, 20, 05), t2(04, 18, 15);
	cout<<"T1 is ";
	t1.show();
	cout<<"T2 is ";
	t2.show();
	cout<<"T1 + T2 is ";
	Time t3 = t1 + t2;
	t3.show();
	t1 = ++t1;
	t1.show();
	t2 = --t2;
	t2.show();
	return 0;
}

