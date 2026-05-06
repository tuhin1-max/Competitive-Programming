#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,x;

        cin >> n >> x;

        int a[n],b[n];

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        int y=0;
        for(int i=0;i<n;i++){
            
            if(a[i]%x==0){
                b[y] = a[i];
                y++;
            }
        }
        int max = b[0];
        for(int i=0;i<y;i++){
            if(b[i]>max){
                max = b[i];
            }
        }
        if(y==0){
            cout << "0" << endl;
        }
        else{
            cout << max << endl;
        }
        

    }
    return 0;
}