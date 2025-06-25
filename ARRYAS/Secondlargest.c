#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
for( int i=0; i<=n-1; i++){
    printf("Enter the %d number :",i);
    scanf("%d",&arr[i]);
}
int max =INT_MIN;
int smax=INT_MIN;
    // int max =arr[0];
    for( int i=0; i<=n-1;i++){
        if( max<arr[i]){
           max = arr[i];
        }
    }
    for( int i=0; i<=n-1;i++){
        if(arr[i]!=max && smax<arr[i]){
           smax = arr[i];
        }
    }
    printf(" %d",smax);

    return 0;
}