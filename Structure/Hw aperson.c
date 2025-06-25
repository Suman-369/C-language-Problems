#include<stdio.h>
#include<string.h>
int main(){
struct person{
int name[50];
int age;
float salary;
}a,b,c;
a.age = 30;
a.salary =3000;
strcpy(a.name,"Suman Kar");

printf("%s\n",a.name);

b.age= 31;
b.salary =8000.75;
strcpy(b.name,"Suraj Khan");

printf("%d\n",b.age);


c.age = 80;
c.salary =20000;
strcpy(c.name,"SonyXSomnath");

printf("%d\n",c.age);

return 0;
}