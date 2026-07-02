#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        double n,m;
        cin >> n >> m;
        if(n/2 <= m){
            cout << "passed" << endl;
        }
        else{
            cout << "failed" << endl;
        }
    }
    return 0;
}