#include<bits/stdc++.h>
using namespace std;
long long n,t,l,r,k,s,d,max1=0,b,c,mod=1e9+7;
long long a[100005];
map<long long,long long>m,p;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=n,j=1;i>=j;i--)
	{
		if(a[i]==4||i==j)
		{
			s++;
		}
		else if(a[i]==3)
		{
			if(a[i]+a[j]==4)
			{
				s++;
				a[j]=0;
				j++;
			}
			else if(a[i]+a[j]>4)
			{
				s++;
			}
		}
		else if(a[i]==2)
		{
			if(a[i]+a[j]==4)
			{
				s++;
				a[j]=0;
				j++;
			}
			else if(a[j]==1)
			{
				if(a[j+1]==1&&j+1<i)
				{
					s++;
					a[j]=0;
					j++;
					a[j]=0;
					j++;
				}
				else if(a[j+1]==2&&j+1<i)
				{
					s++;
					a[j]=0;
					j++;
					a[j]=1;
				}
				else if(j+1==i)
				{
					s++;
					break;
				}
			}
		}
		else if(a[i]==1)
		{
			s+=ceil((i-j+1)*1.0/4);
			break;
		}
	}
	cout<<s;
}
