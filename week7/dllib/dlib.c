#include"ch07.h"
void dynamic_lib_call(void)
{
printf("DYnamic lib is called!\n");
}
void dsum(int x)
{
int s=0;
for(int i=0;i<=x;i++)
{
s=s+i;
printf("s=%d\n",s);
}
}
