#include<bits/stdc++.h>
using namespace std;

int sub(int a, int b)
{
    int count = 0;
    while(a>0 && b>0)
    {
        if(a>=b)
        { 
            count += a/b;
            a=a%b;
        }
        else{
            count += b/a;
            b=b%a;
        }
    }

    return count;
    
}
int main(){
    int n;
    cin >> n;
    while (n--)
    {
        int a,b;
        cin >> a >> b;
        cout << sub(a,b) << endl;
    }
    
    return 0;
}