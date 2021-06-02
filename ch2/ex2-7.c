#include <stdio.h>
#define PI 3.14159

int main(void)
{
	float r, s;

	printf("Enter the radius of a circle : ");
	scanf("%f", &r);
	s = PI * r * r;
	printf("Area is %f\n",s);
	printf("Circumference is %f\n", 2*PI*r);
	return 0;
}
