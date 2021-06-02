#include <stdio.h>

int main(void)
{
	double	d; 		
	int num, den;
	
	num = 30;	den = 8;
	
	d = num / den;				/* Á¤¼ö ³ª´°¼À */
	printf("%f\n", d);
	
	d = (double)num / den;		/* ½Ç¼ö ³ª´°¼À */
	printf("%f\n", d);

	return 0;
}