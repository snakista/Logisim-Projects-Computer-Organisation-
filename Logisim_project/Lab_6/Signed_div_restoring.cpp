//restoring method
#include<bits/stdc++.h>
using namespace std;
int f=0;
string add(string a,string b)
{
	int carry=0;
	int n=a.length();
	string Sum(n,'0');
	for(int i=a.length()-1;i>=0;i--)
	{
		int p=a[i]-'0';
		int q=b[i]-'0';
		int val=p+q+carry;
		if(val==2)
		{
			carry=1;
			Sum[i]='0';
		}
		else if(val==3)
		{
			Sum[i]='1';
			carry=1;
		}
		else if(val==1)
		{
			carry=0;
			Sum[i]='1';
		}
		else if(val==0)
		{
			Sum[i]='0';
			carry=0;
		}
	}
	return Sum;
}
int binary_to_decimal(string s)
{
	int sum=0;
	int n=s.length();
	int val=(int)(pow(2,n-1));
	for(int i=0;i<n;i++)
	{
		int t=(s[i]-'0');
		sum=sum+(val*t);
		val/=2;
	}
	return sum;
}
string compliment(string m)
{
	int n=m.length();
	string M(n,'0');
	for(int i=0;i<m.length();i++)
	{
		if(m[i]=='0')
		M[i]='1';
		else 
		M[i]='0';
	}
	string op(n,'0');
	op[n-1]='1';
	M=add(M,op);
	return M;
}
void resdiv(string div,string divisor,string acc)
{
	int count=divisor.length();
	int acln=acc.length();
	int divln=div.length();
	while(count)
	{
		for(int i=0;i<acln-1;i++)
		acc[i]=acc[i+1];
		acc[acln-1]=div[0];
		for(int i=0;i<divln-1;i++)
		div[i]=div[i+1];
		div[divln-1]='0';
		string cmp=compliment(divisor);
		acc=add(acc,cmp);
		if(acc[0]=='1')
		{
			div[divln-1]='0';
			acc=add(acc,divisor);
		}
		else if(acc[0]=='0')
		{
			div[divln-1]='1';
		}
		count--;
	}
	int res=binary_to_decimal(div);
	if(f!=2)
	{
	div=compliment(div);
	res*=-1;
    }
	cout<<"Quotient:"<<div<<" -> "<<res<<endl;
	cout<<"Remainder:"<<acc<<" -> "<<binary_to_decimal(acc)<<endl;
}
int main()
{
	string dividend;
	string divisor;
	cin>>dividend>>divisor;
	int len=dividend.length();
	string acc(len,'0');
	if(dividend[0]=='1')
	{
		dividend=compliment(dividend);
		f++;
	}
	if(divisor[0]=='1')
	{
		divisor=compliment(divisor);
		f++;
	}
	resdiv(dividend,divisor,acc);
}
