#include <iostream>

using namespace std;

int main()
{
	long long int n,i,k,count=0;
	cin>>n;
	int a[n];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n-1;i++)
	{
		k = a[i]-a[i+1];
		if(k<=0) continue;
		else{
			a[i+1] += k; 
			count += k;
		}
	}
	cout<<count;
	
	return 0;
}
