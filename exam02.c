#include<stdio.h>
int max(int x, int y)
{
	if(x > y)
	    return x;
	else
	    return y;     
}

int main()
{
	int x, y;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d",&x);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d",&y);
	
	prinf("�� ū ���� %d�Դϴ�. Wh" , max(x,y));
	return 0; 
}
