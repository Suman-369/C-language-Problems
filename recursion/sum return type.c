#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1; //base case 
    return n+sum(n-1);
}
int main(){
int n;
printf("Enter the number of n: ");
scanf("%d",&n);
int b= sum(n);
printf("%d",b);
    return 0;
}