#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){     
    int s=(a+64);
    char ch= (char)s;
    if(i%2==0 ) 
     { printf("%d",a);
        a++;}
    else 
    {printf("%c",ch);
             a++;}
        }printf("\n");
}
    }