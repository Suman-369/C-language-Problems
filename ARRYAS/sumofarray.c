#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i =0 ;i<=n-1 ;i++){
        // int i= i+1;
        // printf("Enter the %d number : ",i);
        scanf("%d",&arr[i]);
    }
    // int sum = 0;
    for( int i=0;i<=n-1 ; i++){
        // sum =sum + arr[i];
        printf("%d ",arr[i]);
    }
    // printf("%d",sum);
    return 0;
}
