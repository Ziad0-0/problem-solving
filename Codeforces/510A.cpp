#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	char x = 'r';

	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<m;j++)
				cout<<'#';
			cout<<endl;
		}
		else if(x=='r')
		{
			for(int j=0;j<m-1;j++)
				cout<<'.';
			cout<<"#\n";

			x = 'l';
		}
		else
		{	
			cout<<'#';
			for(int j=1;j<m;j++)
				cout<<'.';
			cout<<endl;

			x = 'r';
		}
	}

	return 0;
}