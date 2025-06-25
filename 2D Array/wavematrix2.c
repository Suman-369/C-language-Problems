#include<stdio.h>
int main(){
int m;
printf("Enter the no of Rows of 1st matrix : ");
scanf("%d",&m);
int n;
printf("Enter the no of Column of 1st matrix : ");
scanf("%d",&n);
int a[m][n];
printf("\nEnter the elements of 1st matrix :\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
// wave print
printf("\n");
for(int i=0;i<m;i++){
    if(i%2==0){
    for(int j=m-1;j>=0;j--){
    printf("%d ",a[i][j]);
    }
}

else{

    for(int j=0;j<=m-1;j++){
        printf("%d ",a[i][j]);
}
}
printf("\n");
}
 return 0;
}
