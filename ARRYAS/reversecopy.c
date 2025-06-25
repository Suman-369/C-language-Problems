#include<stdio.h>
int main(){
int n;
printf("Enter the size of an array: ");
scanf("%d",&n);
int arr[n];
int brr[n];
int i=0;
    for(int i=0; i<=n-1;i++){
printf("Enter the number of %d element : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++);{
brr[i]=arr[(n-1)-i];
}
for(i=0;i<=n-1;i++);{
    printf("%d ",brr[i]);
}
    return 0 ;

}