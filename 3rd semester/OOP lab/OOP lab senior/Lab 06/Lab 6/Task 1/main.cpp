#include <iostream>
#include "Person.h"
#include "Patient.h"
#include "OutPatient.h"
#include "ResPatient.h"

using namespace std;

int main()
{
	
	patient a(5 , "Patient" , "Peshawar" , 0345 , "12/12/12");
	ResPatient b(a , "14/10/17" , "13/9/16");
	b.display();
	
	
	return 0;
}
