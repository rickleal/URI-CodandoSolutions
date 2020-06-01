#include <stdio.h>
int main()
{
    int n,i,res=1;
    scanf("%d",&n);
    if(n > 5 && n < 2000){
		
		for(i=1;i<=n;i++){
			if(i%2 == 0){
				res=i;
				res*=res;
				printf("%d^%d = %d\n",i,2,res);
			}
		}
	}
   return 0; 
}