#include<stdio.h>
#include<string.h>
int main(){
struct book{
int name[50];
int no0fpages;
float price;
}a,b,c;
a.no0fpages = 100;
a.price =400.75;
strcpy(a.name,"sunny the untold story");
printf("%d\n",a.no0fpages);
printf("%f\n",a.price);
printf("%s\n",a.name);

b.no0fpages = 200;
b.price =800.75;
strcpy(b.name,"Miya the untold story");
printf("%d\n",b.no0fpages);
printf("%f\n",b.price);
printf("%s\n",b.name);

c.no0fpages = 80;
c.price =200;
strcpy(c.name,"Danny the untold story");
printf("%d\n",c.no0fpages);
printf("%f\n",c.price);
printf("%s\n",c.name);
return 0;
}