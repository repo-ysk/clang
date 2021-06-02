#include <stdio.h>

int main(void)
{
	int  a, b;
	
	printf("%d\n", 9 / 5);		/* 정수 나눗셈 (몫) */
	printf("%d\n", 9 % 5);		/* 정수 나머지 연산 */
	printf("%f\n", 9.0 / 5.0);	/* 실수 나눗셈 */
	
	printf("%d\n", -9 % 5);		/* 다른 부호 정수의 나머지 연산 */
	printf("%d\n", 9 % -5);
	printf("%d\n", 4 / 5);		/* 결과가 0인 나눗셈 */
	
	a = 10;  
	b = -a;						/* 할당문 : 부호 반전  */
	printf("b = %d\n", b);
	a = a + 5;					/* 할당문 : a값 5 증가 */
	printf("a = %d\n", a);

	return 0;
}
