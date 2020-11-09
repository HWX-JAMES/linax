#include"ch07.h"
int *p,x;
int main()
{
	int *q;
        p=&x;
	q=(int *)mallco(sizeof(int));
	*p=1;
	*q=2;
	printf("*p=%d,*1=%d\n",*p,*q);
return 0;
}
