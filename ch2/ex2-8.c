#include <stdio.h>
#include <limits.h>			
#include <float.h>			

int main()
{
	printf("INT_MAX = %d\n", INT_MAX);			// int 최대값
	printf("FLT_MAX_10_EXP = %d\n", FLT_MAX_10_EXP);	// float 최대지수(10진수)
	printf("FLT_MIN_10_EXP = %d\n", FLT_MIN_10_EXP);	// float 최소지수(10진수)
	printf("FLT_DIG = %d\n", FLT_DIG);			// float 유효자리수(10진수)

	return 0;
}
