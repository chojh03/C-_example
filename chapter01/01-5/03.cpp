#include <iostream>

namespace hybrid 
{
	void hybfunc(void)
	{
		std::cout << "so simple function" << std::endl;
		std::cout << "in namespace hybrid" << std::endl;
	}
}

int main(void)
{
	using hybrid::hybfunc;
	hybfunc();
	return 0;
}
