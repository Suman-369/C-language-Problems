#include<stdio.h>
void main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int product=1;
    for(int i=1;i<=n;i++)
        product=product*i;
        printf("factorial is :%d",product);
    
}