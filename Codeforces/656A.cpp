#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    long long result;
    if(n<13)
        result = pow(2,n);
    else
    {
        result = pow(2,13)-100;
        for(int i=0;i<n-13;i++)
            result *= 2;
    }
    
    cout<<result<<endl;
    return 0;
}
