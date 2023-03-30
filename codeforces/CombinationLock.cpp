#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,p;
   int n;
   cin>>n;
   cin>>s>>p;
int mini,sum = 0;
for(int i = 0;i<n;i++){
    mini = min(abs(s[i]-p[i]),10-(abs(s[i]-p[i])));
    sum = sum + mini;
}

cout<<sum<<endl;

    return 0;
}