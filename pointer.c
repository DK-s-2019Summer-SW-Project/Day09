// Pointer�� ���� ����
// pointer�� �޸𸮿� ���� ������ �����ϰ� �Ѵ�
// pointer ������ �޸��� �ּ� ���� �����ϱ� ���� �����̴�.
#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num = 7;
	int *pnum; // pointer���� pnum�� ����
	int *lnum;
	pnum = &num; // num�� �ּ� ���� ������ ���� pnum�� ����.
	*lnum = 20; // lnum�� ����Ű�� ������ 20�� �����Ѵ�.
	printf("%d", *lnum); // lnum�� ����Ű�� ������ ��ȣ �ִ� ������ ����Ѵ�
	// ���� ������ ������ ���� �ǹ̸� ������. 1. ������ ���� lnum�� ����Ű�� �޸� ������ ���� num�� ���� 20�� ����! 2. ������ ���� lnum�� ����Ű�� �޸� ������ ���� lnum�� ���� �� ���� ����Ѵ�!
	// �׷��Ƿ� *lnum�� ������ ���� lnum�� ����Ű�� ���� num�� �ǹ��Ѵ�. 
	// �Ʒ��� ���� �ڵ带 ���� ���� �Ѵ�.
		return 0; 
}
// ���� 7�� ���� �� int�� ���� num�� �����ϰ� �� ������ �ּ� �� ������ ���� pointer���� pnum�� ��������. �׸��� ���� pnum�� ���� num�� �ּ� ���� �����Ѵ�.

// Example code for pointer

int main()
{

	int num1 = 100, num2 = 100;
	int *pnum;

	pnum = &num1; // ������ pnum�� num1�� ����Ŵ
	(*pnum) += 30; // num1+=30;�� �����ϴ�!
	pnum = &num2; // ������ pnum�� num2�� ����Ų��.
	(*pnum) -= 30; // num2+=20; �� �����ϴ�
	printf("num1: %d num2: %d\n", num1, num2);
	return 0;


}