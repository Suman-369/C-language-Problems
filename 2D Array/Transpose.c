#include<stdio.h>
int main(){
int n;
printf("Enter the number of rows / column : ");
scanf("%d",&n);
printf("Enter all the elements :");
printf("\n");
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);

    }
}
printf("\n");
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int suman = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = suman;
    }
    
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
        }
printf("\n");
}
return 0;

}