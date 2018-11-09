/*#include<stdio.h>
int main()
{
printf("HEIGHT\n");
scanf("%d",h);
*/#include<stdio.h>
int main()
{
int h;
printf("Height\n");
scanf("%d",&h);

while(!(h>0 && h<23))
scanf("%d",&h);

for(int i=0;i<h;i++)
{
for(int j=0;j<(h-i-1);j++)
printf(" ");
for(int p=0;p<(i+2);p++)
printf("#");
printf("\n");
}
}


