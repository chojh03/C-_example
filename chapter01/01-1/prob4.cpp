#include <iostream>

int main(void)
{
	int salary=0,result=0;
	
	while(1)
	{
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) : ";
		std::cin >> salary;
		
		if(salary == -1) break;
		
		result = 50+salary*0.12;
		
		std::cout << "�̹� �� �޿� : " << result << std::endl;
	}
	std::cout << "���α׷� �����մϴ�." << std::endl;
	return 0;
}
