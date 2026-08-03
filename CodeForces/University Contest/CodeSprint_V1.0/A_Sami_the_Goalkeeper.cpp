#include <bits/stdc++.h>
using namespace std;

int main() 
{

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<0){
            cout << "GOAL KICK" << endl;
        }
        else if(n>100){
            cout << "GOAL KICK" << endl;
        }
        else{
            cout << "SAVE" << endl;
        }
    }
    return 0;
}