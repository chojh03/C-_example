#include <iostream>

int main(void)
{
	char name[10];
	char phonenum[12];
	
	std::cout << "�̸� �Է� : ";
	std::cin >> name;
	
	std::cout << "��ȭ��ȣ �Է� : ";
	std::cin >> phonenum;
	
	std::cout << name << std::endl;
	std::cout << phonenum << std::endl;
	
	return 0;
}
