#include<stdio.h>
int main(int argc,char *argv[])
{
    int n=atoi(argv[1]);
    if(argc!=2)
	{
		printf("Invalid arguments!");
		exit(0);
	}
    int dec=0;
    int num=n;
    int b=1;
    while(num)
    {
        int a=num%10;
        num=num/10;
        dec+=(a*b);
        b*=2;
    }
    printf("%d",dec);
    
}
