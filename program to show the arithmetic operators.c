//program to show arithmetic operators
#include <stdio.h>
int main()
{
	int a,b;
	int addition,subtraction,modulus;
	float division;
	printf("Enter the first number ");
	scanf("%d",&a);
	printf("Enter the second number ");
	scanf("%d",&b);
	addition = a+b;
	subtraction = a-b;
	division = (float)a /(float)b;
	modulus = a%b;
	printf("addition of two numbers x, y : %d\n",addition);
	printf("subtraction of two numbers x, y : %d\n",subtraction);
	printf("division of two numbers x, y : %f\n",division);
	printf("modulus of two numbers x, y : %d\n",modulus);
	
	return 0;
}