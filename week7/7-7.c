#include"ch07.h"
static void set_env_string(void)
{
 static char test_env[]="test_env=hwx";
if(putenv(test_env)!=0)
{
printf("failed\n");
}
printf("the tsst_env=%s\n",getenv("test_env"));
}
static void show_env_string()
{
printf("2.the test_env=%s\n",getenv("test_env"));
}
int main()
{
set_env_string();
show_env_string();
return 0;
}
