#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,res;
    cin >> t;
    while(t--)
    {
        int a[3];
        for(int i=0;i<3;i++){
            cin >> a[i];
        }
        
        int count = 0;
        for(int i=0;i<3;i++){
            if(a[i]==1){
                count++;
            }
        }

        if(count>=2){
            res++;
        }
    }
    cout << res << endl;
    return 0;
}