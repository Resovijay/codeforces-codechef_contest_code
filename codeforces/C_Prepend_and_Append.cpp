#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i = 0;
    int j = n-1;
    int count = 0;
    while(i<j){
        if((s[i]=='1'&&s[j]=='0')||(s[i]=='0'&&s[j]=='1')){
            count+=2;
            i++;
            j--;
        }
        else break;
    }
    cout<<n-count<<endl;
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