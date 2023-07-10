//Matrix multiplication – Variable
#include<stdio.h>
int main(){
 int i,j,k;
 int m,n;
 scanf("%d",&m);
 scanf("%d",&n);
 int p[100][100],q[100][100],r[100][100];
 for( i=0; i<m; i++) {
     for(j=0; j<n;j++) {
        scanf("%d",&p[i][j]);
     }
 }

 for(i=0;i<m;i++){
     for(j=0;j<n;j++){
         scanf("%d",&q[i][j]);
     }
 }

 for(i=0;i<m;i++){
      for(j=0;j<n;j++){
          r[i][j]=0;
          for(k=0;k<n;k++){
              r[i][j] += p[i][k]*q[k][j];
          }
      }
 }
 for(i=0;i<m;i++){
     for(j=0;j<n;j++){
         printf("%d \t",r[i][j]);
     }
     printf("\n");
 }
 return 0;
}