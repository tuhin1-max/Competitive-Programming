#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        
        int a = x;
        int b = y;
        int c = z;

        if(a>b){
            swap(a,b);
        }

        if(b>c){
            swap(b,c);
        }

        if(a>b){
            swap(a,b);
        }
        int res = 0;
        if(a+b <= c){
            res = c-a-b+1;
        }

        cout << res << endl;
    }
    return 0;
}