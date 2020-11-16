//made by sitanshu U19EE032
#include<stdio.h>
#include<cstdlib>
int binaryproduct(int binary1,int binary2)
{
	int i=0,rem=0,sum[20];
	int prod=0;
	while(binary1!=0||binary2!=0)
	{
		sum[i++]=(binary1%10+binary2%10+rem)%2;
		rem=(binary1 % 10 + binary2 % 10 + rem) / 2;
		binary1=binary1/10;
		binary2=binary2/10;
	}
	if(rem!=0)
	sum[i++]=rem;
	--i;
	while(i>=0)
	prod=prod*10+sum[i--];
	return prod;
}
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("Invalid arguments!");
		return 0;
	}
	int binary1,binary2;
	binary1=atoi(argv[1]);
	binary2=atoi(argv[2]);
	int digit,factor=1,multiply=0;
	while(binary2!=0)
	{
		digit=binary2%10;
		if(digit==1)
		{
			binary1=binary1*factor;
			multiply=binaryproduct(binary1,multiply);
		}
		else
		{
			binary1=binary1*factor;
		}
		binary2=binary2/10;
		factor=10;
	}
	printf("Product of two binary number is: %ld",multiply);
	return 0;
}
