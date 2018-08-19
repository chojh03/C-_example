#include <iostream>

using namespace std;

void plus_var(int &num)
{
	num++;
}

void change_pm(int &num)
{
	
}
int main(void)
{
	int num = 1;
	
	plus_var(num);
	cout << num << endl;
	
}
