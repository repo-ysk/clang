#include <stdio.h>

int main(void)
{
	double	d; 		
	int num, den;
	
	num = 30;	den = 8;
	
	d = num / den;				/* ���� ������ */
	printf("%f\n", d);
	
	d = (double)num / den;		/* �Ǽ� ������ */
	printf("%f\n", d);

	return 0;
}