#include <stdio.h>

int main() {
	int T1, T2;
	int i, j, m, a;
	int lastc, flag;
	char ans = 'S';
  
  scanf("%d%d",&T1,&T2);
  for ( lastc = -1, i = 0; i < T1; i++ ){
  	for ( flag = 1, a = 0, j = 0; j < T2; j++ ){
  		scanf("%d",&m);
    	if ( m == 0 && flag ) a++; else flag = 0;
    }
    if(a <= lastc && a < T2){
    	ans = 'N'; break;
    }
    lastc = a;
  }
  printf("%c\n",ans);
  return 0;
}
