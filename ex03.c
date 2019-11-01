// 길이가 5인 int형 배열 arr을 선언하고 이를 1,2,3,4,5로 초기화 한 다음, 이 배열의 마지막 요소를 가리키는 포인터 변수 ptr을 선언한다. 그 다음 포인터 변수 ptr에 저장 된 값을 감소시키는
// 형태의 연산을 기반으로 모든 배열 요소에 접근하여, 배열에 저장 된 모든 정수를 더하여 그 결과를 출력

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *ptr = &arr[4]; // 배열의 마지막 요소를 가르키는 포인터 변수임. 왜 arr[4]가 마지막이냐면 배열의 시작은 arr[0]이고 이 배열의 크기는 5이기 때문
	int total = 0, i; // total은 배열의 마지막 값을 저장 하는 부분이며, 이 파트를 감소 시켜 출력을 한다.

	for (i = 0; i < 5; i++)
	{
		total += *(ptr--); // 이렇게 되면 연산의 순서가 1+2+3+4+5 가 아닌 5+4+3+2+1의 형태로 저장을 하게 된다. 
	}
	
	printf("%d\n", total);

	return 0;
}

// int *ptr = &arr[4]로 인해 배열의 시작이 5이므로 5부터 역순으로 덧셈 연산을 실행하게 된다. 