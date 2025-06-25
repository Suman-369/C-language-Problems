#include<stdio.h>
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
    for(int j=i+1;j<=n-1;j++){
        if(arr[i]==arr[j]){
            printf("%d is the duplicate element",arr[i]);
            break;
            
        }
       else{printf("no duplicate");
       break;}
    }
     
}
return 0;
}