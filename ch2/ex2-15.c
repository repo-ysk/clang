#include <stdio.h>

int main(void)
{
    int aValue, bValue;
 
	aValue = 10;
	aValue++;					// ����
    printf("%d\n", aValue);		 
	printf("%d\n", ++aValue);	// �������� - �����Ȱ� ���
	printf("%d\n", aValue--);	// ���İ��� - ���� �� ���
    printf("%d\n", aValue);		 
	
	bValue = ++aValue * 10;		// �ٸ� �����ڿ� ȥ�ջ��
    printf("%d\n", aValue);		
	printf("bValue = %d\n", bValue);

	aValue += 10;				// �����Ҵ� ������
    printf("%d\n", aValue);		

    return 0;
}
