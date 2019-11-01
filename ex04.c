// 길이가 6인 int형 배열 arr을 선언하고 이를 1,2,3,4,5,6으로 초기화한 다음, 배열에 저장된 값의 순서가 역순으로 출력하는 예제를 작성 
// 단 배열의 앞과 뒤를 가리키는 포인터 변수 두개를 선언해서 이를 활용하여 저장된 값의 순서를 뒤 바꿔야 한다. 

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int *fptr = &arr[0]; // 배열의 맨 앞 부분을 설정
	int *bptr = &arr[5]; // 배열의 맨 뒷 부분을 설정
	int i, temp;

	for (i = 0; i < 3; i++)
	{
		temp = *fptr; // temp은 배열의 맨 앞 부분이다
		*fptr = *bptr; // 그리고 이 맨 앞 부분을 뒷부분에 초기화 하고
		*bptr = temp; // 맨 뒷 부분을 temp에 초기화 한.다
		fptr += 1; // 맨 뒷 부분을 +1씩 증가 시키고
		bptr -= 1; // 맨 앞 부분을 -1씩 감소 시킨다.
	}

	for (i = 0; i < 6; i++)
	{
		printf("%d\n", arr[i]); // 이렇게 출력을 하면 원래 선언 했던 배열의 역순으로 출력이 시작 되다. 
	}
	return 0;
}