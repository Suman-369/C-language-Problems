#include<stdio.h>
void main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i=n;i<=n*10;i=i+n){
        printf("%d\n",i);
    }
}