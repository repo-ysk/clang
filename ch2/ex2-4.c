#include <stdio.h>

int main(void)
{
	float r, s;

	printf("Enter the radius of a circle : ");
	scanf("%f",&r);
	s = 3.14159 * r * r;
	printf("Area is %f\n",s);			/* ���� S �� ��� */
	printf("Diameter is %f\n",2*r);		/* ���� 2*r �� ��� */
	
	return 0;
}	
