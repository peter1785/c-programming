//Program to check if divisibility of 17
#include <stdio.h>

int main()
{
	int number;
	printf("Enter a number\n");
	scanf("%d",&number);
	
	if(number%17 == 0)
	{
		printf("divisible by 17\n");
	}
	else 
	{
		printf("not divisible by 17\n");
	}
	
	return 0;
}
