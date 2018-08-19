#include <iostream>

using namespace std;

bool isposfunc(int num)
{
	if(num <= 0)
		return false;
		
	else
		return true;
}

int main(void)
{
	bool ispos;
	int num;
	
	cout << "input num >> ";
	cin >> num;
	
	ispos = isposfunc(num);
	
	if(ispos)
		cout << "positive number" << endl;
		
	else
		cout << "negative number" << endl;
		
	return 0;
}
