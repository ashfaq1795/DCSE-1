#include<iostream>
using namespace std;

class RationalNumber {
	private:
		int top, bottom;
	public:
		RationalNumber() {
	top = 0;
	bottom = 1;
}
RationalNumber(int n1, int n2) {
	top = n1; 
	bottom = n2;
}
		void showRN() {
	cout<<top <<"/"<<bottom<<endl;
}
		friend bool operator>=(RationalNumber, RationalNumber);
		friend bool operator<=(RationalNumber, RationalNumber);
		friend bool operator==(RationalNumber, RationalNumber);
		friend RationalNumber operator+(RationalNumber, RationalNumber);
		friend RationalNumber operator/(RationalNumber, RationalNumber);
		friend bool operator>(RationalNumber, RationalNumber);
		friend bool operator<(RationalNumber, RationalNumber);
		friend RationalNumber operator-(RationalNumber, RationalNumber);
		friend RationalNumber operator*(RationalNumber, RationalNumber);
		friend bool operator!=(RationalNumber, RationalNumber);
};

RationalNumber operator+(RationalNumber n1, RationalNumber n2) {
	RationalNumber returnvalue(n1.top * n2.bottom + n1.bottom * n2.top,n1.bottom * n2.bottom);
	return returnvalue;
}

RationalNumber operator-(RationalNumber n1, RationalNumber n2) {
	RationalNumber returnvalue(n1.top * n2.bottom - n1.bottom * n2.top,n1.bottom * n2.bottom);
	return returnvalue;
}

RationalNumber operator*(RationalNumber n1, RationalNumber n2) {
	RationalNumber returnvalue(n1.top * n2.bottom, n1.bottom * n2.bottom);
	return returnvalue;
}

RationalNumber operator/(RationalNumber n1, RationalNumber n2) {
	RationalNumber returnvalue(n1.top * n2.bottom, n1.bottom * n2.top);
	return returnvalue;
}

bool operator>(RationalNumber n1, RationalNumber n2) {
	float n3 = n1.top/n1.bottom, n4 = n2.top/n2.bottom;
	if(n3>n4) return true;
	return false;
}

bool operator<(RationalNumber n1, RationalNumber n2) {
	float n3 = n1.top / n1.bottom, n4 = n2.top/n2.bottom;
	if(n3 < n4) return true;
	return false;
}

bool operator<=(RationalNumber n1, RationalNumber n2) {
	float n3 = n1.top / n1.bottom, n4 = n2.top/n2.bottom;
	if(n3 <= n4) return true;
	return false;
}

bool operator>=(RationalNumber n1, RationalNumber n2) {
	float n3 = n1.top / n1.bottom, n4 = n2.top/n2.bottom;
	if(n3 >= n4) return true;
	return false;
}

bool operator==(RationalNumber n1, RationalNumber n2) {
	float n3 = n1.top / n1.bottom, n4 = n2.top/n2.bottom;
	if(n3 == n4) return true;
	return false;
}

bool operator!=(RationalNumber n1, RationalNumber n2) {
	float n3 = n1.top / n1.bottom, n4 = n2.top/n2.bottom;
	if(n3!= n4) return true;
	return false;
}

int main() {
	RationalNumber a(83, 11), b(3, 7);
	cout<<"A + B is ";
	RationalNumber n1 = a + b;
	b = a + b;
	b.showRN();
	n1 = a - b;
	n1.showRN();
	n1 = a * b;
	n1.showRN();
	n1 = a / b;
	n1.showRN();
	bool gr = a > b;
	cout<<gr;
	return 0;
}

