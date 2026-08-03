#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--){
        char c;
        int n;
        cin >> c >> n;
        if(c== 'U' && (n==1 || n==2)){
            cout << "Stronger" << endl;
        }
        else if(c== 'U' && n==3){
            cout << "Equal" << endl;
        }
        else if(c== 'U' && (n==4 || n==5 || n==6)){
            cout << "Weaker" << endl;
        }
        else{
            cout << "Weaker" << endl;
        }
    }
    return 0;
}