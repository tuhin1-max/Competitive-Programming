#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int total_pass = 0;
    int mx = 0;
    while (t--)
    {
        int a,b; 
        cin >> a >> b;
        
        total_pass = total_pass - a + b;
        mx = max(total_pass,mx);

    }

    cout << mx << endl;
    
    return 0;
}