#include <stdio.h>
int main()
{
	double raio, n = 3.14159, area;
	scanf("%lf",&raio);
	area = n*(raio*raio);
	printf("A=%.4f\n",area);
	return 0;
}