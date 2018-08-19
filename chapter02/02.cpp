#include <iostream>

using namespace std;

int main(void)
{
	int num1 = 1020;
	int &num2 = num1;
	int *num3 = &num2;
	
	*num3 = 3047;
	cout << "VAL : " << num1 << endl;
	cout << "REF : " << num2 << endl;
	cout << "POI : " << *num3 << endl;
	
	cout << "VAL : " << &num1 << endl;
	cout << "REF : " << &num2 << endl;
	cout << "POI : " << num3 << endl;
	
	return 0; 
}
