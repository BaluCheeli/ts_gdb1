#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void fun(int );

int main()
{
int n;
printf("enter the no above 10\n");
scanf("%d",&n);
fun(n);
return 0;
}

void fun(int n)
{
for(int i=1;i<n;i++)
printf("%d",i);
}
