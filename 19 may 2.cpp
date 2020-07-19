#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=3;
	int start=0,end=n,mid,ans=-1;
	while(start<=end)
	{
		mid = (start+end)/2;
		if(((mid*(mid+1))/2)<=n)
		{
			ans=mid;
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	cout<<ans<<endl;
}
