#include <stdio.h>

int main(void)
{
	double	d; 		/* 64-bit �Ǽ� */
	float 	f;		/* 32-bit �Ǽ� */
	int	a;			/* 32-bit ���� */
	short	b;		/* 16-bit ���� */

	d = 9 / 7;			/* �Ҵ繮 �� ��ȯ */
	printf("%f\n", d);
	d = 9.0 / 7;		/* ������ ���� ������ �� ��ȯ */
	printf("%f\n", d);

	d = 123456.789012;
	f = d;			/* f = 123456.789063 : ���е� �ս� */
	a = f;			/* a = 123456 : �Ҽ��κ� �ս�  */
	b = a;			/* b = -7616 : �ǹ� ���� �� */
 
	printf("%f\n", d);
	printf("%f\n", f);
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}