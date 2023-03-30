#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i = 0;i<n;i++) cin>>a[i];
    int b[m];
    for(int i = 0;i<m;i++) cin>>b[i];
    vector<int>a1;
    vector<int>b1;
    int i = 0;
    int j = 0;
    int k = 1;
    while(i<n && j<m){
        if(a[i]>b[j]){
           b1.push_back(k);
           j++;
        }
        else{
            a1.push_back(k);
            i++;
        }
        k++;
    }
    while(i<n){
         a1.push_back(k);
       i++;
       k++;
       //a1.push_back(i);
    }
    while(j<m){
         b1.push_back(k);
        j++;
        k++;
    }

  for(auto it:a1){
    cout<<it<<" ";
  }cout<<endl;
 
    for(auto it:b1){
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
    int t=1;
    //cin>>t;
    while(t--){
      solve();
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}