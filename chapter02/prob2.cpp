#include <iostream>

using namespace std;

typedef struct __Point{
	int xpos;
	int ypos;
}point;

point& pntaddr(const point &p1,const point &p2)
{
	point *p3 = new point;
	
	p3->xpos = p1.xpos+p2.xpos;
	p3->ypos = p1.ypos+p2.ypos;

	return *p3;
}

int main(void)
{
	point *p1 = new point;
	p1->xpos = 1;
	p1->ypos = 2;
	
	point *p2 = new point;
	p2->xpos = 10;
	p2->ypos = 20;
	
	point &result = pntaddr(*p1,*p2);
	cout << "xpos : " << result->xpos << endl;
	cout << "ypos : " << result->ypos << endl;
	
	delete p1;
	delete p2;
	
	return 0;
}
