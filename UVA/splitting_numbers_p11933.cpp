#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int n;
    int a,b;
    bool a_turn;
    
    while(cin>>n, n!=0)
    {
        a = b = 0;
        a_turn = false;
        for(int i=0;i<32;i++)
            if(n&(1<<i))
            {
                (a_turn)? a |= (1<<i): b |= (1<<i);

                a_turn = !a_turn;
            }
     
        cout<<b<<' '<<a<<endl;
        
    }
}
