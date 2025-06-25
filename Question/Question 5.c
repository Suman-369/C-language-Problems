#include<stdio.h>
int main(){
int n;
printf("Enter your bainary number : ");
scanf("%d",&n);
int a=1;
int ans=0;
while(n!=0){
    ans+=(n%10) * a;
    n =n /10;
    a = a*2;
}
printf("%d",ans);
    return 0;
}