#include<stdio.h>

#define pi 3.14

int main()
{
	float r, cevre, alan;
	
	printf("yaricapi girin:");
	scanf("%f", &r);
	
	cevre = 2 * pi * r;
	alan = pi * pi * r;
	
	printf("cevre : %f, alan : %f", cevre, alan);
	
	
	
	
	
	
	return 0;
}
