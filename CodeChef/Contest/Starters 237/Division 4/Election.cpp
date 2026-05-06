#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;

    int sm = (n/2)+1;
    int res = sm - k;
    if(sm<k){
        cout << "0" << endl;
    }
    
    else{
        cout << res << endl;
    }
    
    return 0;
}