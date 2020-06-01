#include <stdio.h>

int main()
{
    int n, i, j, num = 1, cont;
    scanf("%d", &n);
	for(j = 1; j <= n; j++){
    	scanf("%d", &num);
    	cont = 0;
    	for(i = 1; i <= num; i++){
        	if(num % i == 0){
        		cont += 1;
        }
    }
    	if(cont == 2){
        	printf("%d eh primo\n", num);
    	}else{
        	printf("%d nao eh primo\n", num);
    	}
	}
    return 0;
}