//made by sitanshu U19EE032
#include<stdio.h>
#include<cstdlib>
int main(int argc,char *argv[])
{
	int a,b,res=0;
	char ch;
	if(argc!=4)
	{
		printf("Invalid arguments!");
		exit(0);
	}
	a=atoi(argv[1]);
	b=atoi(argv[3]);
	ch=argv[2][0];
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
