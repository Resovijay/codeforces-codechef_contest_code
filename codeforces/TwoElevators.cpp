#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
     int p = a-1;
     int q = abs(b-c)+abs(c-1);
     if(p>q) cout<<"2"<<endl;
       else if(p<q) cout<<"1"<<endl;
       else cout<<"3"<<endl;
    }
      return 0; 
    }