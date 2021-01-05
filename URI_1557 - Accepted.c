#include <stdio.h>

void preenchimentos();
int matrizQuadIII(int x);

int main(){

    preenchimentos();

    return 0;
}

void preenchimentos(){
    int i = 0,j = 0;
    int N, a, b, c = 1; 
    int x, y = 0; 
    int I; 
    int d, e = 0, f, g, h;

    while(1){
        scanf("%d", &N);
        
        if(N == 0){
            break;
        }else{
            int quadM[N][N];
            I = N-1;
            for(x = 0, c = 1, y = 0; x < N; x++){
                for(a=y,b=0; a>=0; a--,b++)
                    quadM[a][b] = c;
                y++; c *= 2;
            }
            for(x = 1,y = 1; x < N; x++){
                for(a=I, b=y; b <= I; a--, b++)
                    quadM[a][b] = c;
                y++; c *= 2;
            }
            d = matrizQuadIII(quadM[I][I]);
            for(i = 0; i < N; i++){
                for(j = 0; j < N; j++){
                    if(j == 0){
                        h = quadM[i][j];
                        e = matrizQuadIII(h);
                        g = d-e;
                        for(f = 1;f <= g; f++)
                            printf(" ");
                        printf("%d",quadM[i][j]);
                    }else{
                        h = quadM[i][j];
                        e = matrizQuadIII(h);
                        g = d-e;
                        for(f = 1;f <= g; f++){
                            printf(" ");
                        }
                        printf(" %d",quadM[i][j]);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }
}

int matrizQuadIII(int x){
    int a = x, b = 0;
    while(a){
        a /= 10;
        b++;
    }
    return b;
}
