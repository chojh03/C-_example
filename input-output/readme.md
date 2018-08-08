# C++에서의 입출력
나는 일단 C언어에서 입출력을 더 많이,,해봐서 적응하는데 더 오래걸렸다  
```c
#include <iostream>

using namespace std;

int main(void)
{
	int i=0;
	cin >> i;
	cout << i << endl;
}
```
일단 예제소스는 다음과 같다.  
위에 C++의 입출력을 위해 iostream 헤더를 추가해주었다.  
int 형 변수 i를 선언해주고, cin 함수로 i에다가 입력을 받고, cout 함수로 입력 받은 값을 출력해주었다.  
