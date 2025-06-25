#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array :");
    scanf("%d",&n);

int a[n];
for(int i=0; i<=n-1;i++){
printf("Enter the number of %d element : ",i);
        scanf("%d",&a[i]);
    }
int sumEven =0;
int sumOdd =0;
for(int i=0;i<=n-1;i++){
    if(i%2==0){
        sumEven += a[i];

    }
    else{
        sumOdd += a[i];
    }
}
int res=sumEven-sumOdd;
printf("%d",res);
    return 0;

}