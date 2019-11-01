// 문제 1에서는 포인터 변수 ptr에 저장된 값을 변경시켜 가면서 배열 요소에 접근하라고 하였다. 그런데 이번에는 pointer변수 ptr에 저장된 값을 변경 시키지 않고, ptr을 대상으로 
// 덧셈을 연산을 하여, 그 결과로 반환되는 주소 값을 통해서 모든 배열 요소에 접근하여 값을 2개씩 증가 시키는 예제를 작성

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *ptr = arr;
	int i;
	for (i = 0; i < 5; i++)
		*(ptr + i) += 2; // 배열을 직접적으로 건들지 않고 연산하는 것의 결과 값처럼 값을 출력 하였다.

	for (i = 0; i < 5; i++)
		printf("%d", arr[i]);
	
	return 0;
}