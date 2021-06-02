/* mile 단위의 길이를 km 단위로 변환하여 출력하는 프로그램 */

#include <stdio.h>

int main(void)
{
	float scale = 1.609;		/* scale: 1 mile = 1.609 km */
	float mile;					/* mile 단위 길이 */

	mile = 85000.0;
	printf("km = %f\n", scale * mile);		// km 환산 출력
	return 0;
} 
