#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        int sum = 0;
        int mx = a[0];

        sort(a,a+n,greater<int>());

        for(int i=0;i<n;i++){
            mx = max(mx,a[i]);
            sum += mx;
        }

        cout << sum << endl;
    }
    return 0;
}