#include <stdio.h>
int main()
{
	int C1, C2, Q1, Q2; 
	float R1, R2;
	scanf("%d %d %f",&C1,&Q1,&R1);
	scanf("%d %d %f",&C2,&Q2,&R2);
	printf("VALOR A PAGAR: R$ %.2f\n",(Q1*R1+Q2*R2));
	return 0;
}