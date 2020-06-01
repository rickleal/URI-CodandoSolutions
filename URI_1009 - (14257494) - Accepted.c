#include <stdio.h>
int main()
{
	char A[10];
	double B, C;
	scanf("%s",A);
	scanf("%lf",&B);
	scanf("%lf",&C);
	printf("TOTAL = R$ %.2lf\n",(C*0.15)+B);
	return 0;
}