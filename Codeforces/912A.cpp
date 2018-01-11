#include <bits/stdc++.h>

using namespace std;

unsigned long long int bc,yc;
unsigned long long int yb,gb,bb;
unsigned long long int numc = 0;

int main(){
			
	cin>>yc>>bc;

	cin>>yb>>gb>>bb;

	(yc >= (gb*1+yb*2))? numc += 0 : numc += (gb*1+yb*2)-yc;
	(bc >= (gb*1+bb*3))? numc += 0 : numc += (gb*1+bb*3) -bc;

	cout<<numc<<endl;

	return 0;
} 
