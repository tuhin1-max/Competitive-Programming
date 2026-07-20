#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }

        sort(a,a+n);
        
        int last_element = a[n-1];
        int k = (last_element - a[0]) + 1;

        cout << k << endl;

    }
    
    return 0;
}