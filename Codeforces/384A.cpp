#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char grid[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            grid[i][j]='.';

    bool c;
    int cnt = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {   
            c = false;
            if(i!=0)
                if(grid[i-1][j]=='C')
                    c = true;
            if(j!=0)
                if(grid[i][j-1]=='C')
                    c = true;
            if(i!=n-1)
                if(grid[i+1][j]=='C')
                    c = true;
            if(j!=n-1)
                if(grid[i][j+1]=='C')
                    c = true;
            
            if(!c)
            {   cnt++;
                grid[i][j] = 'C';
            }
        }
        cout<<cnt<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<grid[i][j];
            cout<<endl;
        }
        
        return 0;    
}
