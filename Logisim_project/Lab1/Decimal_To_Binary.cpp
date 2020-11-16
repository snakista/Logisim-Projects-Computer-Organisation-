#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("Invalid arguments!");
		exit(0);
	}
	int n=atoi(argv[1]);
	int arr[20];
	int i=0;
	while(n>0)
	{
		arr[i]=n%2;
		n=n/2;
		i++;
	}
	for(int p=i-1;p>=0;p--)
	{
		printf("%d",arr[p]);
	}
}
