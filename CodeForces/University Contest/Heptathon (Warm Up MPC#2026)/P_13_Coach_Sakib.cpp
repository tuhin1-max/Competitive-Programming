#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,s;
    cin >> n >> a >> b >> s;

    int mx = max(a,b);
    int mn = min(a,b);

    int res = (mx*(n-1)) + (mn*1);
    int res2 = (mn*(n-1)) + (mx*1);
    
    if(res >= s && res2<=s){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}