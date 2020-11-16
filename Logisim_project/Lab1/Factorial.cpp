#include<stdio.h>
#include<cstdlib>
int fec(int n)
{
    if(n>=1)
    return n*fec(n-1);
    return 1;
}
int main(int argc,char *argv[])
{
    int n=atoi(argv[1]);
    long int res=1;
    res=fec(n);
    printf("%ld",res);
}
