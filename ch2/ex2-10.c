#include <stdio.h>

int main(void)
{
	int  a, b;
	
	printf("%d\n", 9 / 5);		/* ���� ������ (��) */
	printf("%d\n", 9 % 5);		/* ���� ������ ���� */
	printf("%f\n", 9.0 / 5.0);	/* �Ǽ� ������ */
	
	printf("%d\n", -9 % 5);		/* �ٸ� ��ȣ ������ ������ ���� */
	printf("%d\n", 9 % -5);
	printf("%d\n", 4 / 5);		/* ����� 0�� ������ */
	
	a = 10;  
	b = -a;						/* �Ҵ繮 : ��ȣ ����  */
	printf("b = %d\n", b);
	a = a + 5;					/* �Ҵ繮 : a�� 5 ���� */
	printf("a = %d\n", a);

	return 0;
}
