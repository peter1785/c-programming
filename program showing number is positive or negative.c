//program to show number is positive or negative
#include <stdio.h>
int main()
{
	int number;
	printf("enter any number \n");
	scanf("%d",&number);
	if(number >=0)
	{
		printf("the number is positive",number);
	}
	else
	{
		printf("the number is negative",number);
	}
	return 0;
}
