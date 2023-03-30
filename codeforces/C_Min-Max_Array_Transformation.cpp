#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>d_min(n);
    vector<int>d_max(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    for(int i = 0;i<n;i++) cin>>b[i];
    list<int>ls;
    int j = n-1;
    for(int i = n-1;i>=0;i--){
        while(j>=0 && b[j]>=a[i]){
            ls.push_back(b[j]);
            j--;
        }

        // for(auto it:ls){
        //     cout<<it<<" ";
        // }cout<<endl;


        d_min[i] = ls.back()-a[i];
        d_max[i] = ls.front()-a[i];
        int a_count = n-i;
        int b_count = n-j-1;
        if(a_count==b_count) {
            ls.clear();
        }
    }
    for(auto it:d_min){
        cout<<it<<" ";
    }cout<<endl;

  for(auto it:d_max){
        cout<<it<<" ";
    }cout<<endl;

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