#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x1,x2,x3,x4,h;
    cin >> x1 >> x2 >> x3 >> x4 >> h;
    long long l = max(x1,x3);
    long long l2 = min(x2,x4);
    long long final_l = max(0ll,l2-l);
    long long res = final_l*h;
    cout << res << endl;
    return 0;
}