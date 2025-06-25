#include<stdio.h>
#include<string.h>
int main(){
typedef struct cricketer{
    char name[50];
    int age;
    int no0fMatches;
    float avg;

}cricketer;

cricketer arr[3];
for(int i=0;i<3;i++){ 
    scanf("%s",arr[i].name);
    scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].no0fMatches);
    scanf("%d",&arr[i].avg);
printf("\n");
}
for(int i=0;i<3;i++){ 
    printf("Name : %s\n",arr[i].name);
    printf("Age : %d\n",arr[i].age);
    printf("No of MAtch : %d\n",arr[i].no0fMatches);
    printf("Average : %d\n",arr[i].avg);
printf("\n");
}
return 0;
}