#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mpp;
    int prev = 1; 
    for(int i = 0;i<n;i++){
        if(mpp.find(s[i])!=mpp.end()){
            if(mpp[s[i]]==prev){
                cout<<"NO"<<endl;
                return;
            }
            else{
                prev = mpp[s[i]];
            }
        }
        else{
            prev = 1-prev;
            mpp[s[i]]=prev;
        }
    }
    cout<<"YES"<<endl;
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


   vector<ll>v(n);
   for(ll i=0; i<n; i++) cin>>v[i];
   sort(v.begin(),v.end()); 
     
   ll sm = 1;
   if(v[0] != 1){
       cout<<"NO"<<endl;  
       return ;
   }
    for(ll i=1; i<n; i++){
        if(v[i] <= sm) { 
            sm += v[i];  
            continue;
        }
        else {
            cout<<"NO"<<endl;  
            return;
        }
    }

    cout<<"YES"<<endl;