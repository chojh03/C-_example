#include <iostream>
#include <string.h>

using namespace std;

char *makestradr(int len)
{
	char *str = new char[len];
	return str;
}

int main(void)
{
	char *str = makestradr(20);
	strcpy(str,"hello world");
	
	cout << str << endl;
	delete []str;
	return 0;
}
