#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int  n;
	cin>>n;

	if(n&1)
	{
		long long int x = (n-1)/2+1;
		cout<<-x<<endl;
	}
	else
		cout<<n/2<<endl;
		


	return 0;
}