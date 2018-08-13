#include <iostream>

void myfunc(void)
{
	std::cout << "void myfunc(void) called." << std::endl;
}

int myfunc(int i)
{
	std::cout << "int myfunc(int i) called." << std::endl;
}
int main(void)
{
	myfunc();
	myfunc(1);
	
	return 0;
}
