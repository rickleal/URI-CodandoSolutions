#include <stdio.h>
int main()
{
	int A, B, C;
	scanf("%d %d %d",&A, &B, &C);
	A = (A+B+abs(A-B))/2;
	printf("%d eh o maior\n",(A+C+abs(A-C))/2);
	return 0;
}