// int형 변수 num1과 num2를 선언과 동시에 각각 10과 20으로 초기화 하고, int형 푄터 변수 ptr1과 ptr2를 선언하여 각각num1과 num2를 가리키게 한다
// 그리고 이 상태에서 포인터 변수 ptr과 prt2를 이용해서 num1과 num2를  각각 10증가 10감소 시킨다.
// 이제 두 포인터 변수 ptr1과 ptr2가 가르키는 대상을 서로 바꾼다. 즉 포인터 변수 ptr1이 num2를 가르키게 하고 그 반대로 만든다
// 마지막은 그 2개의 값을 출력 한다.

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num1 = 10, num2 = 20;
	int *ptr1 = &num1; // 이렇게 선언을 해야 정상적으로 배열에 값을 넣을 수 있게 된다. 
	int *ptr2 = &num2;
	int *temp;
	/**ptr1 = &num1; --> 이렇게 따로 선언을 하면 에러가 발생한다.
	*ptr2 = &num2;*/

	(*ptr1) += 10;
	(*ptr2) -= 10;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("%d %d\n", *ptr1, *ptr2);

	return 0;
}