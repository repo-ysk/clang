#include <stdio.h>

int main(void)
{
	double	d; 		/* 64-bit 실수 */
	float 	f;		/* 32-bit 실수 */
	int	a;			/* 32-bit 정수 */
	short	b;		/* 16-bit 정수 */

	d = 9 / 7;			/* 할당문 형 변환 */
	printf("%f\n", d);
	d = 9.0 / 7;		/* 오른쪽 수식 묵시적 형 변환 */
	printf("%f\n", d);

	d = 123456.789012;
	f = d;			/* f = 123456.789063 : 정밀도 손실 */
	a = f;			/* a = 123456 : 소수부분 손실  */
	b = a;			/* b = -7616 : 의미 없는 값 */
 
	printf("%f\n", d);
	printf("%f\n", f);
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}