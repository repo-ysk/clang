#include <stdio.h>

int main(void)
{
    int aValue, bValue;
 
	aValue = 10;
	aValue++;					// 증가
    printf("%d\n", aValue);		 
	printf("%d\n", ++aValue);	// 사전증가 - 증가된값 출력
	printf("%d\n", aValue--);	// 사후감소 - 원래 값 출력
    printf("%d\n", aValue);		 
	
	bValue = ++aValue * 10;		// 다른 연산자와 혼합사용
    printf("%d\n", aValue);		
	printf("bValue = %d\n", bValue);

	aValue += 10;				// 복합할당 연산자
    printf("%d\n", aValue);		

    return 0;
}
