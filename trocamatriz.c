#include <stdio.h>
#include <stdlib.h>
#define MAX 9

void trocaDiagonal(int M[MAX][MAX]){
    int i, j;
    int diagonal1[MAX];
    int diagonal2[MAX];
    int k=8;
    int m=8;
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            if(i==j){
            diagonal1[i]=M[i][j];
            }
        }
    }
    j=8;
    for(i=0; i<MAX; i++){
        diagonal2[i]=M[i][j];
        j--;
    }
    for(i=0 ; i<MAX ; i++){      
        for(j=0 ; j<MAX ; j++){           //substituindo
            if(i==j){
                M[i][j]=diagonal2[k];
                k--;
            }
            if((i==8)&&(j==0)){
                M[i][j]=diagonal1[m];
                m--;
            }
            if((i==7)&&(j==1)){
                M[i][j]=diagonal1[m];
                m--;
            }
            if((i==6)&&(j==2)){
                M[i][j]=diagonal1[m];
                m--;
            }
            if((i==5)&&(j==3)){
                M[i][j]=diagonal1[m];
                m--;
            }
            if((i==4)&&(j==4)){
                M[i][j]=diagonal1[m];
                m--;
            }
            if((i==3)&&(j==5)){
                M[i][j]=diagonal1[m];
                m--;
            }
            if((i==2)&&(j==6)){
                M[i][j]=diagonal1[m];
                m--;
            }
            if((i==1)&&(j==7)){
                M[i][j]=diagonal1[m];
                m--;
            }
            if((i==0)&&(j==8)){
                M[i][j]=diagonal1[m];
                m--;
            }
        }
    }

}

int main()
{
  int M[MAX][MAX];
  int l, c;

  for(l=0;l<MAX;l++)
    for(c=0;c<MAX;c++)
       scanf("%d",&M[l][c]);

  trocaDiagonal(M);
  printf("\n");

  for(l=0;l<MAX;l++)
  {
    for(c=0;c<MAX;c++)
      printf("%d ",M[l][c]);
    printf("\n");
  }

  return 0;
}
