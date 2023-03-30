#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int up = 0;
    int right = 0;
    int des = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='U') up++;
        else if(s[i]=='D') up--;
        else if(s[i]=='L') right--;
        else right++;
        if(up==1 && right==1 ){
            des = 1;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(des==0) cout<<"NO"<<endl;

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