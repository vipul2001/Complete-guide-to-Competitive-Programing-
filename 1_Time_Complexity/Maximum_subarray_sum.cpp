#include <iostream>
using namespace std;
int n3_time(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int s=0;
			for(int k=i;k<=j;k++)
			{
				s=s+a[k];
			}
			if(s>sum)
			{
				sum=s;
			}
		}
	}
	return sum;
}
int n_time(int a[],int n)
{
	int best = 0, sum = 0;
for (int k = 0; k < n; k++) {
sum = max(a[k],sum+a[k]);
best = max(best,sum);
}
return best;
	
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;int* a;
		cin>>n;
		a=new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<(n3_time(a,n));
		cout<<(n_time(a,n));
	}
	return 0;
}
