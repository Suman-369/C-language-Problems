#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of Rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of Colums : ");
    scanf("%d",&c);
    int a[r][c];
    for(int i=0; i<r;i++){
        for( int j=0;j<c;j++){
            printf("Enter the elements : ");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<r;i++){
        for( int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}