//made by sitanshu U19EE032
#include<stdio.h>
#include<cstdlib>
#include<math.h>
void printBinary(int n,int i)
{
	int k;
	for(k=i-1;k>=0;k--)
	{
		if((n>>k)&1)
		printf("1");
		else
		printf("0");
	}
}
typedef union{
	float f;
	struct
	{
		unsigned int mantissa: 23;
		unsigned int exponent: 8;
		unsigned int sign: 1;
	} raw;
}myfloat;
void ieee(myfloat var)
{
	printf("%d | ",var.raw.sign);
	printBinary(var.raw.exponent,8);
	printf(" | ");
	printBinary(var.raw.mantissa,23);
	printf("\n");
}
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("Invalid arguments!");
		return 0;
	}
	myfloat var;
	float a=atof(argv[1]);
	var.f=a;
	printf("The IEEE 754 representation of the number is:");
	ieee(var);
}
