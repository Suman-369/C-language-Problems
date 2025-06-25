#include<stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a, int b){
    for(int i=1;i<=min(a,b);i++){
        int hcf;
        if(a%i==0 && b%i==0){
            hcf =i;
        }
    }
   
}
void main(){
    int a;
    printf("Enter the 1st number: ");
    scanf("%d",&a);

    int b;
    printf("Enter the 2nd number: ");
    scanf("%d",&b);
    int hcf= gcd(a,b);
    printf("the HCF of%d and %d is : %d",a,b,hcf);
    }
    