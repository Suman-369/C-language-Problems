#include<stdio.h>
void main(){
int n;
printf("enter number of rows: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
for (int j=1;j<=n;j++)
printf("%d",j);
printf("\n");}
}
