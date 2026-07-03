#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long count = (n/24)*8;
        long long rem = n%24;
        for(long long x =1;x<=rem;x++){
            if(((x*x)-1)%24==0){
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}