//Program to find the sum of first 10 natural numbers
#include <stdio.h>
int main()
{
	int i;
int sum = 0;
	printf("The first 10 numbers are : \n");
for(i= 1; i<= 10; i++)
{
	sum= sum+i;
	printf("%d\n",i);
}
printf("\n The sum is : %d\n ",sum);
return 0;
	
}
