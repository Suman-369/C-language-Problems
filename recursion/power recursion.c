// Make 'a function which is calculated 'a' raised to the powerb 'b' using recursion.
#include<stdio.h>
int power(int a, int b){
    if(b==0) return 1;
    int recAns = a* power (a,b-1);
    return recAns;
}
int main(){
int a;
printf("Enter the number of n: ");
scanf("%d",&a);
int b;
printf("Enter the number of n: ");
scanf("%d",&b);
int p= power(a,b);
printf("%d raised to the power %d is %d",a,b,p);
    return 0;
}