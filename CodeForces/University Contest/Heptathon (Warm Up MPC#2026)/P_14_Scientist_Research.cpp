#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        long long res = pow(2,i-1);
        cout << res << " ";
    }
    return 0;
}