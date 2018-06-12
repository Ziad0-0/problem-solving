#include <bits/stdc++.h>

using namespace std;

void printSet(int vS) {                         // in binary representation
  printf("S = %2d = ", vS);
  stack<int> st;
  while (vS)
    st.push(vS % 2), vS /= 2;
  while (!st.empty())                         // to reverse the print order
    printf("%d", st.top()), st.pop();
  printf("\n");
}

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
