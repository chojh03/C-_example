#include <iostream>

namespace bestcomimp1
{
	void simplefunc(void)
	{
		std::cout << "BestCom's func" << std::endl;
	}
}

namespace progcomimpl
{
	void simplefunc(void)
	{
		std::cout << "progcom's func" << std::endl;
	}
}

int main(void)
{
	bestcomimp1::simplefunc();
	progcomimpl::simplefunc();
	
	return 0;
}
