#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    
    string num[n];
    
    int cnt = 0;
    bool flag;
    
    
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        sort(num[i].begin(),num[i].end());
        flag = true;
        for(int j=0;j<=k;j++)
        {
            if(!binary_search(num[i].begin()+j,num[i].end(),'0'+j))
            {
                flag = false;
                break;
            }

        }
        
        if(flag)
            cnt++;
    }
    
    cout<<cnt<<endl;
    return 0;
}
    
