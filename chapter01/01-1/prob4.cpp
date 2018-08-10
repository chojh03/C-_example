#include <iostream>

int main(void)
{
	int salary=0,result=0;
	
	while(1)
	{
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end) : ";
		std::cin >> salary;
		
		if(salary == -1) break;
		
		result = 50+salary*0.12;
		
		std::cout << "이번 달 급여 : " << result << std::endl;
	}
	std::cout << "프로그램 종료합니다." << std::endl;
	return 0;
}
