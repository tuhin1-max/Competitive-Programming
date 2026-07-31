#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x,k;
    cin >> x >> k;

    vector<long long> v;

    for(long long i=1;i*i<=x;i++){
        if(x%i==0){
            v.push_back(i);
            if(i != x/i){
                v.push_back(x/i);
            }
        }
    }

    sort(v.begin(),v.end());

    if(v.size() < k){
        cout << -1 << endl;
    }
    else{
        cout << v[k-1] << endl;
    }
    
    return 0;
}