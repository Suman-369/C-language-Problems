#include<stdio.h>
int result(int arr[],int n,int x){
     int count=0;
for(int i=0; i<=x-1;i++){
    if(arr[i]>n) count++; 
}
return count;
}
int main(){ 
    int n;
    printf("Enter the number of n :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1;i++){
printf("Enter the number of %d element : ",i);
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter the number of n :");
    scanf("%d",&x);
     int result(arr,n,x);
    printf("The greater number is %d %d\n",x,result);
    return 0;
}
    
    