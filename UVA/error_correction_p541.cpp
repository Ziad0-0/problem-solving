#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char temp;
    while(cin>>n, n)
    {   
        char matrix[n][n];
        bool row_even[n],column_even[n];
        int sum;
        int corrupted_columns, corrupted_rows;
        corrupted_columns = corrupted_rows = 0;
        for(int i=0;i<n;i++)
        {
            sum = 0;
            for(int j=0;j<n;j++)
            {
                cin>>matrix[i][j];
                if(matrix[i][j]=='1')
                    sum++;
            }
            
            (sum&1)? corrupted_rows++, row_even[i] = false : row_even[i] = true;
        }
        
        for(int i=0;i<n;i++)
        {
            sum = 0;
            for(int j=0;j<n;j++)
            {
                if(matrix[j][i]=='1')
                    sum++;
            }
            
            (sum&1)? corrupted_columns++, column_even[i] = false : column_even[i] = true;
        }

        if(corrupted_columns ==  0 && corrupted_rows == 0)
            cout<<"OK\n";
        else if(corrupted_columns == 1 && corrupted_rows == 1)
        {   
            int temp_i;
            for(int i=0;i<n;i++)
                if(!row_even[i])
                {
                    temp_i = i;
                    break;
                }

            int temp_j;
            for(int j=0;j<n;j++)
                if(!column_even[j])
                {
                    temp_j = j;
                    break;
                }
            
            cout<<"Change bit ("<<temp_i+1<<','<<temp_j+1<<")\n";
        }
        else
            cout<<"Corrupt\n";
    }
}