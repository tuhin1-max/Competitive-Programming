#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k,n,w,total=0;
    cin >> k >> n >> w;

    for(long long i=1;i<=w;i++){
        total += k*i;
    }

    if(total <= n){
        cout << 0 << endl;
    }
    else{
        cout << total - n << endl;
    }
    return 0;
}