#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 1,res = 0;
    for(int i = 1; i<s.length();i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            res = res +(count+4)/5;
            count = 1; 
        }
    }
    res = res +(count+4)/5;
    cout<<res<<endl;
    return 0;
}