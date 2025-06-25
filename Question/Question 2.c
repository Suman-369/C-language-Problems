#include<stdio.h>
#include<string.h>
int main(){
typedef struct student{
    char name[50];
    int roll;
    int marks;
   

}student;
float total =0;
student arr[3];
int n=3;
for(int i=0;i<n;i++){ 
    printf("Enter the Name:");
    scanf("%s",arr[i].name);
    printf("Enter the Roll:");
    scanf("%d",&arr[i].roll);
    printf("Enter the Marks:");
    scanf("%d",&arr[i].marks);
    printf("\n");
total += arr[i].marks;}
   
printf("\n");

float avg = total/n;
 printf("Name\tRoll\tMarks\t\n");
for(int i=0;i<n;i++){ 
    printf("%s\t",arr[i].name);
    printf("%d\t",arr[i].roll);
    printf("%d\t",arr[i].marks);
    
   
printf("\n");

}
printf("\nAvg :%f",avg);
return 0;
}