#include<stdio.h>
int maze2(int n, int m){
    int rightways= 0;
    int downways = 0;
    if(n==1 && m==1) return 1;
    if(n==1){
        rightways += maze2(n,m-1);
    }
    if(m==1){
        downways += maze2(n-1,m);

    }
    if(n>1 && m>1){
        rightways += maze2(n,m-1);
        downways += maze2(n-1,m);

    }
    int totalways =rightways + downways;
    return totalways;

    
}
int main(){
int a;
printf("Enter the number of rows of maze: ");
scanf("%d",&a);
int b;
printf("Enter the number of colums of the maze: ");
scanf("%d",&b);
int numberofways= maze2(a,b);
printf("%d",numberofways);
    return 0;
}