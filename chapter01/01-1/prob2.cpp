#include <iostream>

int main(void)
{
	char name[10];
	char phonenum[12];
	
	std::cout << "이름 입력 : ";
	std::cin >> name;
	
	std::cout << "전화번호 입력 : ";
	std::cin >> phonenum;
	
	std::cout << name << std::endl;
	std::cout << phonenum << std::endl;
	
	return 0;
}
