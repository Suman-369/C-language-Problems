#include<stdio.h>
int main(){
    int n;
    printf("Enter the Sie of an array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    printf("Enter the Elements of ann %d array  : ",i);
    scanf("%d",&arr[i]);
    }
    printf("The main array is: ");
    for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
     }

     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
     }
        printf("\n");
        printf("The result is: ");
         for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
     }
        
        
    return 0;
}