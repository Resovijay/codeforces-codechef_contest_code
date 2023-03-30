#include<bits/stdc++.h>
using namespace std;
#define int long long

bbol check(int n){
    string s = to_string(n);
    int i = 0,j=s.length()-1;
    while(i<=j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}

void solve(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int p;
    for(int i = m;i<=100000;i++){
        if(check(i)){
            p=i;
            break;
        }
    }
    cout<<p-m<<endl;

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