#include <stdio.h>

int main(void)
{
	float r, s;

	printf("Enter the radius of a circle : ");
	scanf("%f",&r);
	s = 3.14159 * r * r;
	printf("Area is %f\n",s);			/* 변수 S 값 출력 */
	printf("Diameter is %f\n",2*r);		/* 수식 2*r 값 출력 */
	
	return 0;
}	
