#include <stdio.h>
int main(){
	float n1,n2,n3,n4, medP=0.0, exameF=0.0, medF=0.0;
	int i;
	scanf("%f",&n1);
	scanf("%f",&n2);
	scanf("%f",&n3);
	scanf("%f",&n4);
	medP=(n1*2+n2*3+n3*4+n4*1)/10;
	if(medP>=7.0){
		printf("Media: %.1f\n",medP);
		printf("Aluno aprovado.\n");
	}
	if(medP<5.0){
		printf("Media: %.1f\n",medP);
		printf("Aluno reprovado.\n");
	}
	if(medP>=5.0 && medP<=6.9){
		scanf("%f",&exameF);
		medF=(medP+exameF)/2;
		if(medF>=5.0){
			printf("Media: %.1f\n",medP);
			printf("Aluno em exame.\n");
			printf("Nota do exame: %.1f\n",exameF);
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n",medF);
		}
		if(medF<=4.9){
			printf("Media: %.1f\n",medP);
			printf("Aluno em exame.\n");
			printf("Nota do exame: %.1f\n",exameF);
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n",medF);
		}
	}
	return 0; 
}