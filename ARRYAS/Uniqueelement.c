#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
for( int i=0; i<=n-1; i++){
    printf("Enter the %d number :",i);
    scanf("%d",&arr[i]);
}
for(int i=0;i<=n-1;i++){
    bool flag = false;
    for(int j=i+1;j<=n-1;j++){
        if(arr[i]==arr[j]){
            flag = true;
        }
    }
    if(flag == false){
        printf("%d",arr[i]);
        break;
    }
}
return 0;
}