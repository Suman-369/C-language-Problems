#include<stdio.h>
int powerlog(int a, int b){
    if(b==0) return 1;
    int i=powerlog(a,b/2);
    if(b%2==0) return i*i;
    else return i*i*a;
}
int main(){
int a;
printf("Enter the base: ");
scanf("%d",&a);
int b;
printf("Enter the case: ");
scanf("%d",&b);
int p= powerlog(a,b);
printf("%d raised to the power %d is %d",a,b,p);
    return 0;
}