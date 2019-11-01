// Pointer에 대한 공부
// pointer란 메모리에 직접 접근이 가능하게 한다
// pointer 변수란 메모리의 주소 값을 저장하기 위한 변수이다.
#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num = 7;
	int *pnum; // pointer변수 pnum의 선언
	int *lnum;
	pnum = &num; // num의 주소 값을 포인터 변수 pnum에 저장.
	*lnum = 20; // lnum이 가르키는 변수에 20을 저장한다.
	printf("%d", *lnum); // lnum이 가르키는 변수를 부호 있는 정수로 출력한다
	// 위의 문장은 다음과 같은 의미를 가진다. 1. 포인터 변수 lnum이 가르키는 메모리 공간인 변수 num에 정수 20을 저장! 2. 포인터 변수 lnum이 가리키는 메모리 공간인 변수 lnum에 저장 된 값을 출력한다!
	// 그러므로 *lnum은 포인터 변수 lnum이 가르키는 변수 num을 의미한다. 
	// 아래에 예시 코드를 통해 설명 한다.
		return 0; 
}
// 정수 7이 저장 된 int형 변수 num을 선언하고 이 변수의 주소 값 저장을 위한 pointer변수 pnum을 선언하자. 그리고 나서 pnum에 변수 num의 주소 값을 저장한다.

// Example code for pointer

int main()
{

	int num1 = 100, num2 = 100;
	int *pnum;

	pnum = &num1; // 포인터 pnum이 num1을 가리킴
	(*pnum) += 30; // num1+=30;과 동일하다!
	pnum = &num2; // 포인터 pnum이 num2를 가르킨다.
	(*pnum) -= 30; // num2+=20; 과 동일하다
	printf("num1: %d num2: %d\n", num1, num2);
	return 0;


}