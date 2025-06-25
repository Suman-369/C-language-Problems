#include<stdio.h>
int main(){
    int m;
    printf("Enter the number of 1st Rows : ");
    scanf("%d",&m);
    int n;
    printf("Enter the number of 1st Column : ");
    scanf("%d",&n);
    printf("\nEnter the elements>:\n");
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int p;
    printf("Enter the number of 2nd Rows : ");
    scanf("%d",&p);
    int q;
    printf("Enter the number of 2nd Column :");
    scanf("%d",&q);
    printf("\nEnter the elements>:\n ");
    int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
if(n!=p){
printf("Matrix are not multipled");
}
else{
int res[m][q];
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        res[i][j]=0;
        for(int k=0;k<n;k++){
            res[i][j] +=a[i][k] * b[k][j];
        }
    }
}

printf("\nThe result is :\n");
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        printf("%d ",res[i][j]);
    }
    printf("\n");
}
}
return 0;
}