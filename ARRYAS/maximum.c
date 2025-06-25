#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={1,2,3,4,5};
// for( int i=0; i<5; i++){
//     int i =i + 1;
//     printf("Enter the %d number :",i);
//     scanf("%d ",&arr[i]);
// }
int max =INT_MIN;
    // int max =arr[0];
    for( int i=0; i<=5;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf(" %d",max);

    return 0;
}