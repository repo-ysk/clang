#include <stdio.h>

int main(void)
{
    int a, b;

	// 비트 연산자
	a = 0x8C6A;			// 1000 1100 0110 1010	
	printf("%x\n", a);		 // 16진수 출력
	
	b = a & 0xF00;
	printf("%x\n", b);
	b = a | 0xF0;
	printf("%x\n", b);		 
	b = a ^ 0xF;
	printf("%x\n", b);		 

	b &= 0xF;				// 복합할당 연산자
	printf("%x\n", b);		 

	// 시프트 연산자
	b = (a & 0xF00) >> 8;
	printf("%x\n", b);		 

	a = 31;
	printf("%d\n", a << 2);
	printf("%d\n", a >> 2);
	
	a = 0x8000FFF0;
	printf("%x\n", a >> 2);				// signed shift right
	printf("%x\n", (unsigned)a >> 2);	// unsigned shift right

    return 0;
}
