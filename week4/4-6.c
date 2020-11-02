#include "ch03.h"
int main(){
	int d1;
	d1=open("./out.info",O_CREAT|O_TRUNC|O_WRONLY,0644);
	
	d1=dup(STDOUT_FILENO);
/*	dup2(d1,1);*/
	printf("Redirect stdout file!\n");
	return 0;

}
