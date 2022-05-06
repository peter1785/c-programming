//program to check for leap year
#include <stdio.h>
int main()
 {
 	int year;
 	printf("Enter the year\n");
 	scanf("%d",&year);
 	
 	if (year%4==0 )
 	{
 		printf("a leap year\n");
	 }
	 else
	  {
	 printf("not a leap year\n");	
	 }
	return 0;
}
