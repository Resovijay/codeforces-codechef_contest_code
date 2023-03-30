#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n ;
    cin>>n;
    int a[n];
    multiset<int>ms;
    for(int i =0 ;i<n;i++){
        cin>>a[i];
        ms.insert(a[i]);
    }
    int nums =*ms.begin();
    int count = 1;
    while(ms.size()>0){
        if(ms.find(nums)!=ms.end()){
            ms.erase(ms.find(nums));
            nums++;
        }
        else{
            count++;
            nums = *ms.begin();
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