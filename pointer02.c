// 다양한 포인터 형이 존재하는 이유? --> 포인터 형은 메모리 공간을 참조하는 기준이 되기 때문에, 즉,  메모리 공간의 접근 기준을 마련하기 위함이다

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	double num = 3.14;
	int *pnum = &num;
	printf("%d", *pnum);// type의 불일치로 인해 예측이 불가능한 의미 없는 출력이 된다!!  --> double로 선언을 하였으면 double로 마무리를 지어야 한다
	// 포인터는 할당된 주소에 의해 메모리를 가져오기 때문에 평소처럼, 자동적으로 형변환을 실행 한다고 생각하면 안됨!

	return 0;
}