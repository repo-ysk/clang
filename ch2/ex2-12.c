#include <stdio.h>

int main()
{
	int a, b, c;
	float x, y, z;
	
	printf("%f\n", 5.0/9.0*9.0);		/* �Ǽ� ���� */
	printf("%d\n", 5/9*9);				/* ���� ���� */
	
	a = 10;  b = 15;
	printf("%d\n", (-a + 2*b)/3); 		/* ���� �����ڸ� ����� ���� */

	x = 10.0; y = 30.0;
	z = (x + 3.0) / (y - 5.0); 
	printf("z = %f\n", z);				/* ���н� ��� */

	c = b = a + 10;						/* ���� �Ҵ繮 */
	printf("b = %d\n", b);
	printf("c = %d\n", c);	
    
	return 0;
}
