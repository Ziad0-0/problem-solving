#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int num_faces = 0;

	string poly;

	for(int i=0;i<n;i++)
	{
		cin>>poly;

		switch(poly[0])
		{
			case 'T':
				num_faces += 4;
			break;
			
			case 'C':
				num_faces += 6;
			break;
			
			case 'O':
				num_faces += 8;
			break;
				
			case 'D':
				num_faces += 12;
			break;
			
			case 'I':
				num_faces += 20;
			break;
		}
	}

	cout<<num_faces<<endl;
}