/* mile ������ ���̸� km ������ ��ȯ�Ͽ� ����ϴ� ���α׷� */

#include <stdio.h>

int main(void)
{
	float scale = 1.609;		/* scale: 1 mile = 1.609 km */
	float mile;					/* mile ���� ���� */

	mile = 85000.0;
	printf("km = %f\n", scale * mile);		// km ȯ�� ���
	return 0;
} 
