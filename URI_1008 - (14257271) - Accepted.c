#include <stdio.h>
int main()
{
	int NUMBER, A;
	float SALARY;
	scanf("%d",&NUMBER);
	scanf("%d",&A);
	scanf("%f",&SALARY);
	printf("NUMBER = %d\n",NUMBER);
	printf("SALARY = U$ %.2f\n",SALARY*A);
	return 0;
}