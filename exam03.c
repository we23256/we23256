#include<stdio.h>
int fact(int a)
{
	int i,fact = 1;
	for(i=1;i<=a;i++)
	    fact *= i;
		
	return fact	 
}

int main()
{
	printf("알고싶은 팩토리얼의 값은?");
	scanf("%d", &num);
	
	printf("%d!의 값은 %d입니다. Wh",num,fact(num));
	return 0;
}
