#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,y;
        cin >> n >> x >> y;
        int res,res2,res3,sub;;
        if(n>=0 && n<=3){
            res = n*x;
            if(n<=3){
                cout << res << endl;
            }
        }

        else if(n>3){
            res2 = 3*x;
            sub = n - 3;
            res3 = sub*y + res2;
            cout << res3 << endl;
        }
    }
    
	return 0;
}
