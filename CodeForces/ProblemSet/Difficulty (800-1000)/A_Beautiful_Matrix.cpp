#include<bits/stdc++.h>
using namespace std;

int main(){
    int mat[6][6];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> mat[i][j];
        }
        
    }
    
    int r,c;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if(mat[i][j] == 1)
            {
                r = i;
                c = j;
                break;
            }
        }
        
    }

    int count1 = llabs(r-3); 
    int count2 = llabs(c-3); 
    
    int res = count1+count2;

    cout << res << endl;
    
    return 0;
}