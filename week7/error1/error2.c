#include"ch07.h"
#define N 10
int a[N],i;
int main()
{
for(i=0;i<N;i++)
	a[i]=i+1;
	a[i-1]=123456789;
printf("%d\n",i);
printf("%d\n",a[N]);
return 0;
}
