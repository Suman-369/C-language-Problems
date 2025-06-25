#include<stdio.h>
int fibo( int n){if(n<=2)
return 1;
int ans1=fibo(n-1);
int ans2=fibo(n-2);
int ans=ans1+ans2;
return ans;

}

int main(){
    int n;
    printf("enter n0: ");
    scanf("%d",&n);
    int x=fibo (n);
    printf("%d",x);
    return 0;
}