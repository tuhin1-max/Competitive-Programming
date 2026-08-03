#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s == "Feluda")
        {
            cout << "Detective" << endl;
        }
        else if(s == "Topshe"){
            cout << "Assistant" << endl;
        }
        else if(s == "Jatayu"){
            cout << "Writer" << endl;
        }
        else{
            cout << "Unknown" << endl;
        }
    }
    return 0;
}