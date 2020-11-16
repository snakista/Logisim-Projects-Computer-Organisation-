//made by sitanshu U19EE032
#include<stdio.h>
#include<cstdlib>
int main(int argc,char *argv[])
{
	if(argc!=4)
	{
		printf("Invalid arguments!");
		exit(0);
	}
	const int a=atoi(argv[1]);
	const int b=atoi(argv[3]);
	const char ch=argv[2][0];
	volatile int res=0;
	switch(ch)
	{
		case '+': res=a+b;
		          break;
		case '-': res=a-b;
		          break;
		case '*': res=a*b;
		          break;
	    case '/': res=a/b;
	              break;
	}
	printf("%d",res);
}
