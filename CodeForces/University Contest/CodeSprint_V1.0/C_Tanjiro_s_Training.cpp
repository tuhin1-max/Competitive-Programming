#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int count = 0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;

    for(int i=0;i<n;i++){
        
        if(a[i] == 1){
            count1=1;
        }
        else if(a[i] == 2){
            count2=1;
        }
        else if(a[i] == 3){
            
            count3=1;
        }
        else if(a[i] == 4){
            
            count4=1;
            
        }
        else if(a[i] == 5){
            
            count5=1;
            
        }
        else if(a[i] == 6){
            count6=1;
        }
        else if(a[i] == 7){
           
            count7=1;
            
        }
        else if(a[i] == 8){
            count8=1;
            
        }
        else if(a[i] == 9){
            count9=1;
            
        }
        else if(a[i] == 10){
            count10=1;
            
        }
        else{
            count = 0;
        }
        
    }
    
    int ans = count1+count2+count3+count4+count5+count6+count7+count8+count9+count10;
    cout << ans << endl;
    
    return 0;
}