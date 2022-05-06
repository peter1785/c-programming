//program to find the volume of a sphere
#include <stdio.h>
#include <math.h>
int main()
{
	float r,volume;
	printf("Enter the radius \n");
	scanf("%f",&r);
	volume=1.3*M_PI*r*r*r;
	printf("volume of the sphere = %f \n",volume);
	return 0;
}
