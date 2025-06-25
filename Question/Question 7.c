#include<stdio.h>
int main(){
    int n;
    printf("Enter the numnber for creating a pyramide : ");
    scanf("%d",&n);
    int nsp =n-1;
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int q=1;q<=nsp;q++){
            printf(" ");
        }
        nsp--;
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int j=1;j<=i-1;j++){
            printf("%d",j);
            a--;
        }
            printf("\n");

    }
    return 0;
}