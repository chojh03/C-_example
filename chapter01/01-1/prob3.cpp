#include <iostream>

int main(void)
{
	int gugudan;
	
	std::cout << "�� �ܺ���? : ";
	std::cin >> gugudan;
	
	for(int i=1;i<10;i++)
	{
		std::cout << gugudan << "*" << i << "=" << gugudan*i << std::endl;
	}
	
	return 0;
}
