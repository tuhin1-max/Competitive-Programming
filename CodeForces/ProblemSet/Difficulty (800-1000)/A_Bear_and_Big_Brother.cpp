#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,b;
    cin >> l >> b;
    int count = 0;
    for(int i=0;i<l;i++){
        count++;
        l = l*3;
        b = b*2;
        if(l>b){
            break;
        }
    }

    cout << count << endl;
    return 0;
}