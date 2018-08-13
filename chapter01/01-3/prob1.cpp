#include <iostream>

void swap(int *swap1,int *swap2)
{
	int tmp = *swap1;
	
	*swap1 = *swap2;
	*swap2 = tmp;
}

void swap(char *swap1,char *swap2)
{
	char tmp = *swap1;
	
	*swap1 = *swap2;
	*swap2 = tmp;
}

void swap(double *swap1,double *swap2)
{
	double tmp = *swap1;
	
	*swap1 = *swap2;
	*swap2 = tmp;
}
int main(void)
{
	int num1=20,num2=30;
	swap(&num1,&num2);
	std::cout << num1 << ' ' << num2 << std::endl;
	
	char ch1='A',ch2='Z';
	swap(&ch1,&ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;
	
	double db1=1.111,db2=5.555;
	swap(&db1,&db2);
	std::cout << db1 << ' ' << db2 << std::endl;
}
