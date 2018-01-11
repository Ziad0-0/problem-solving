#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,t,k,d;
	cin>>n>>t>>k>>d;

	int one_oven = 0;
	int temp = n;
	
	while(n>0)
	{
		one_oven+=t;
		n-=k;
	}
	
	n = temp;
	int two_ovens = d;
	n-=k;
	
	while(n>0)
	{
		two_ovens+=t;
		n-=2*k;
	}

	cout<<one_oven<<endl;
	cout<<two_ovens<<endl;
	
	if(two_ovens<one_oven)
		cout<<"YES\n";
	else
		cout<<"NO\n";
		
	return 0;
}