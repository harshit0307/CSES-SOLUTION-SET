#include <iostream>
using namespace std;

int main()
{
	long int n;
	cin>>n;
	int a[n],i,sum = 0,x,ans;
	
	for(i=0;i<n-1;i++)
	{
		cin>>a[i];
		sum += a[i];
	}
	
	x = (n*(n+1))/2;
	ans = x-sum;
	cout<<ans;
	
	return 0;
}
