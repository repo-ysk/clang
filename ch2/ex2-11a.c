#include <stdio.h>

int main()
{
	float f, c;

	printf("인코딩 "); 
	scanf("%f", &f);

	c = 5.0/9.0 * (f-32.0);			// 화씨-섭씨 온도변환식
	printf("%f\n", c);

	return 0;
}
 