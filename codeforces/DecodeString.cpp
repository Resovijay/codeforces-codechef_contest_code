#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char ch[100000];
        for(int i = 0;i<n;i++){
            cin>>ch[i];
        }
        string op ="";
        
        for(int i = n-1;i>=0;i--){
            int num = ch[i] + 'a';
            cout<<num<<endl;
              //char p = s[i] + '0' - 1;  
            cout<<"hello"<<endl;
        }
    }
}