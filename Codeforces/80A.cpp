#include <bits/stdc++.h>

using namespace std;

int main()
{
	int primes[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

	int n,m;
	cin>>n>>m;
	
	int index_n,index_m;
	
	for(int i=0;i<15;i++)
		if(primes[i]==n)
			index_n=i;

	for(int i=0;i<15;i++)
		if(primes[i]==m)
			index_m=i;

	if(index_n+1==index_m)
		cout<<"YES\n";
	else
		cout<<"NO\n";

	
}