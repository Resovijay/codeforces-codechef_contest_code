#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    string s1,s2;
    cin>>s1;
    s2=s1;
    //sort(s2.begin(),s2.end());
    int count = 0;
    for(int i=0;i<s1.length();i++){
        int j = i;
        if(s1[i]=='1'){
            while(s1[j+1]!='1'){
              count++;
              j=j+1;
            }
        }
    }
    cout<<count<<endl;
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
    int t;
    cin>>t;
    while(t--){
      solve();
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}