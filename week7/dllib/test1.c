#include"ch07.h"
extern void dynamic_lib_call(void);
int main()
{
 void *dlib=dlopen("./libdlib.so",RTLD_NOW);
 if(!dlib)
 {
 printf("dlibfailed\n");
 exit(-1);
 }
 void(*dfunc) (void)=dlsym(dlib,"dynamic_lib_call");
 void(*fn)(int)=dlsym(dlib,"dsum");
 if(!dfunc||!fun)
 {
 printf("dfuncfailed\n");
 exit(-1);}
 fn(100);
 dfunc();
 dlclose(dlib);
 return 0;
}
