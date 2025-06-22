#include<stdio.h>
void main(){
    int n;
    printf("Enter the age of a person: ");
    scanf("%d",&n);
    if(n>=18)
    printf("The person is eligible for vote");
    else 
    printf("The person is not eligible for vote");
}