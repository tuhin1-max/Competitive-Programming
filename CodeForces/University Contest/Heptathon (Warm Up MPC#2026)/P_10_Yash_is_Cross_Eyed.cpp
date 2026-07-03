#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int size = s.size();
        if(size%2!=0){
            cout << "NO" << endl;
            continue;
        }

        int freq[26] = {0};

        for(char c:s){
            freq[c-'a']++;
        }
        
        bool res = true;
        for(int i=0;i<26;i++){
            if(freq[i]%2 != 0){
                res = false;
                break;
            }
        }

        if(res){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}