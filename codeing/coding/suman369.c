#include<stdio.h>
void main(){
int n;
printf("enter number of rows: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int a=1;
for (int j=1;j<=n;j++){
printf("%d",a);
a=a+2;}
printf("\n");}
}
