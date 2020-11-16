//made by sitanshu U19EE032
#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
string binary1,binary2;
string add(string a,string b)
{
	int s=0;
	string result="";
	int i=a.size()-1,j=b.size()-1;
	while(i>=0||j>=0||s==1)
	{
		s+=((i>=0)?a[i]-'0':0);
		s+=((j>=0)?b[j]-'0':0);
		result=char(s%2+'0')+result;
		s/=2;
		i--; 
		j--;
	}
	return result;
}
string convt(string a)
{
	string res="";
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='0')
		{
			res+='1';
		}
		else if(a[i]=='1')
		{
			res+='0';
		}
	}
	string s="1";
	string res1=add(res,s);
	return res1;
}
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("invalid argument");
		return 0;
	}
	binary1=argv[1];
	binary2=argv[2];
	string resadd,ressub;
	resadd=add(binary1,binary2);
	cout<<"Addition of two numbers is: "<<resadd<<endl;
	if(binary1[0]=='1')
	{
		string s1;
		s1=convt(binary1);
		binary1=s1;
	}
	if(binary2[0]=='0')
	{
		string s1;
		s1=convt(binary2);
		binary2=s1;
	}
	ressub=add(binary1,binary2);
	cout<<"Subtraction of both numbers is: "<<ressub;
}
