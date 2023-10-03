#include <iostream>
#include "person.h"
using namespace std;

int main() 
{
	person p1("Anda", "Wos", 19);
	person p2("Alex", "Wos", 21);
	

	p1.print();
	p2.print();

	p1.print("Anda");
	
	if (p1 == p2)
		cout << "p1 and p2 are equal\n";
	else
		cout << "p1 and p2 are not equal\n";
	int test = p1.compareTo(p2);
	cout << "Compare: " << p1.compareTo(p2) << endl;

	return 0;
	
}