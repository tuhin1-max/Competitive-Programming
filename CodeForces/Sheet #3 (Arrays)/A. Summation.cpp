#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, i;
    long long A[100005];
    long long sum = 0;  
    
    cin >> N;
    
    for(i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    
    for(i = 0; i < N; i++)
    {
        sum = sum + A[i];
    } 
    
    if(sum < 0)
    {
        sum = llabs(sum);
    }
    
    cout << sum << endl;  
    return 0;
}