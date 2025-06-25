#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("enter no:");
    scanf("%d",&n);
    int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int smallest=INT_MAX;
int largest=INT_MIN;
for(int i=0;i<n;i++){
    if(smallest>arr[i])smallest=arr[i];
    if(largest<arr[i])largest=arr[i];
}
printf("the smallest in the arry%d",smallest);
printf("the largest in the arry%d",largest  );
return 0;

}