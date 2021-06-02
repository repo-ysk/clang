#include <stdio.h>

int main()
{
	int a, b, c;
	float x, y, z;
	
	printf("%f\n", 5.0/9.0*9.0);		/* 실수 연산 */
	printf("%d\n", 5/9*9);				/* 정수 연산 */
	
	a = 10;  b = 15;
	printf("%d\n", (-a + 2*b)/3); 		/* 여러 연산자를 사용한 수식 */

	x = 10.0; y = 30.0;
	z = (x + 3.0) / (y - 5.0); 
	printf("z = %f\n", z);				/* 수학식 계산 */

	c = b = a + 10;						/* 다중 할당문 */
	printf("b = %d\n", b);
	printf("c = %d\n", c);	
    
	return 0;
}
