#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int sum = a+b;
    int res = a/2;
    sum = sum + res;
    if(res < b){
        sum++;
    }
    else{
        sum = sum;
    }

    cout << sum << endl;
    return 0;
}