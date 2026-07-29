#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    
    int count = 0;
    if(islower(str[0])){
        for(int i=1;i<str.length();i++){
            if(islower(str[i])){
                count++;
                break;
            }
        }
    }

    int size = 0;
    for(int i=0;i<str.length();i++){
        if(isupper(str[i])){
            size++;
        }
    }
    if(islower(str[0]) && count==0){
        str[0] = toupper(str[0]);
        for(int i=1;i<str.length();i++){
            str[i] = tolower(str[i]);
        }
        cout << str << endl;
        return 0;
    }

    if(size == str.length()){
        for(int i=0;i<str.length();i++){
            str[i] = tolower(str[i]);
        } 
        cout << str << endl;   
    }
    else{
        cout << str << endl;
    }

    return 0;
}