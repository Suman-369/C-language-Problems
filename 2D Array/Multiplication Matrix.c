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

int p;
printf("Enter the no of Rows of 2nd matrix : ");
scanf("%d",&p);
int q;
printf("Enter the no of Rows of 2nd matrix : ");
scanf("%d",&q);
int b[p][q];
printf("\nEnter the elements of 2nd matrix :\n");
for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        scanf("%d",&b[i][j]);
    }
}
// check
if(n!=p){
    printf("The matrix is can not be multiplied");
}
else{
    // multiplication
int res[m][q];
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        res[i][j] = 0;
        // i column of a  ; j column of b
        for(int k=0;k<n;k++){
            res[i][j] += a[i][k]*b[k][j];
        }
    }
}
// print
printf("\nThe result Matrix is :\n");
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        printf("%d ",res[i][j]);
    }
    printf("\n");
}
}
    return 0;
}