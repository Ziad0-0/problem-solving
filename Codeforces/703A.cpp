#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int m,c,cnt_m = 0, cnt_c = 0;

    while(n--)
    {
        cin>>m>>c;
        
        if(m>c)
            cnt_m++;
        else if(c>m)
            cnt_c++;
    }

    if(cnt_m>cnt_c)
        cout<<"Mishka\n";
    else if(cnt_c>cnt_m)
        cout<<"Chris\n";
    else
        cout<<"Friendship is magic!^^\n";

    return 0;
}