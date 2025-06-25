#include<stdio.h>
int stair(int n){
    if(n==1 || n==2) return n;
    int ways= stair(n-1) + stair (n-2);
    return ways;
}

int main(){
int n;
printf("Enter the number of n: ");
scanf("%d",&n);
int ways= stair(n);
printf("%d",ways);
    return 0;
}