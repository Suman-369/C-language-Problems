#include <stdio.h>
void main() {
int n;
    printf("Enter the year: ");
    scanf("%d",&n);
    if((n%4==0 && n%100!=0)||(n%400==0)){
    printf("%d The given year is leap year",n);}
    else 
   { printf("%dThe given year is not leap year",n);  }
   }