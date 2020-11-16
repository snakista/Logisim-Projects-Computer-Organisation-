//made by sitanshu U19EE032
#include<stdio.h>
#define SIZE(x) sizeof(x)*8
void signed_one(int count,int n)
{
	int min,max,pro;
	pro=1;
	while(count!=1)
	{
		pro=pro<<1;
		count--;
	}
	min=~pro;
	min=min+1;
	max=pro-1;
	printf("\n%d to %d",min,max);
	printf("\n%d",n);
	if(n<min||n>max)
	{
		printf("\nThe value is not in the range");
	}
	else
	printf("\nThe value is in the range!");
	
}
void unsigned_one(int count)
{
	unsigned int min,max,pro=1;
	while(count!=0)
	{
		pro=pro<<1;
		count--;
	}
	min=0;
	max=pro-1;
	printf("\n%u to %u",min,max);
}
int main()
{
	int a;
	char b=300;
	short int c;
	long int d;
	float e;
	double f;
	printf("Size of int is: %d bytes\n",sizeof(int));
	printf("Size of char is: %d bytes\n",sizeof(char));
	printf("Size of short int is: %d bytes\n",sizeof(short int));
	printf("Size of long int is: %d bytes\n",sizeof(long int));
	printf("Size of float is: %d bytes\n",sizeof(float));
	printf("Size of double is: %d bytes\n",sizeof(double));
	printf("\nrange of int");
    signed_one(SIZE(int),a);    
    printf("\nrange of unsigned int");
    unsigned_one(SIZE(unsigned int));
    printf("\nrange of char");
    signed_one(SIZE(char),b);
    printf("\nrange of unsigned char");
    unsigned_one(SIZE(unsigned char));
    printf("\nrange of short");
    signed_one(SIZE(short),c);
    printf("\nrange of unsigned short");
    unsigned_one(SIZE(unsigned short));
}
