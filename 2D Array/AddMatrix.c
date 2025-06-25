#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of Rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of Colums : ");
    scanf("%d",&c);
    int a[r][c];
    int b[r][c];
    int res[r][c];
    for(int i=0; i<r;i++){
printf("Enter the number of %d element : ",i);
for(int j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
//     for(int i=0; i<c;i++){
// printf("Enter the number of %d element : ",i);
//         scanf("%d",&a[i]);
//     }
    for(int i=0; i<r;i++){
        for( int j=0;j<c;j++){
            res[i][j] = a[i][j] + b[i][j];
            }
    }
    for(int i=0; i<r;i++){
        for( int j=0;j<c;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}