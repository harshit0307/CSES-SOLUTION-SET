#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<long int> v;
	string str;
	char c;
	cin>>str;
	long int i,n=str.length(),count = 1;
	
	c = str[0];
	for(i=1;i<=n;i++)
	{
		if(c==str[i])
			count++;
		
		else if(c!=str[i]){
			c = str[i];
			v.push_back(count);
			count = 1;
		}				
	}
	
	long int ans = *max_element(v.begin(),v.end());
	cout<<ans;
	
	return 0;	
}
