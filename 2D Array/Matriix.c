#include<stdio.h>
// #define ROWS 4
// #define COLUMN 2
int main(){
    int ROWS;
    printf("Enter the number of a ROW: ");
    scanf("%d",&ROWS);
    int COLUMN=2;
    // printf("Enter the number of a COLUMN: ");
    // scanf("%d",&COLUMN);
int matrix[ROWS][COLUMN];
printf("Enter roll number and marks  student:\n");
for(int i=0;i<ROWS;i++){
    printf("Enter roll number for student %d: ",i+1);
    scanf("%d",&matrix[i][0]);
    printf("Enter marks for student %d: ",i+1);
    scanf("%d",&matrix[i][1]);
}
printf("The table is:\n");
for(int i=0;i<ROWS;i++){
    for(int j=0;j<COLUMN;j++){
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
}
return 0;
}