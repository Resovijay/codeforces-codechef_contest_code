#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
    vector<int>odd;
    vector<int>even;
    int ecount=0;
    int ocount=0;
    int sum = 0 ;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
         ecount = 0;
         even.push_back(i+1);
        } 
        else{
            ocount++;
           odd.push_back(i+1);
        }
        sum+=a[i];
    }
     
     if(sum%2==0 && ecount!=ocount) {
        cout<<"NO"<<endl;
        return;
     }
    
    //cout<<"YES"<<endl;
    if(ecount!=0){
        cout<<"YES"<<endl;
    cout<<odd[0]<<" "<<even[0]<<" "<<even[1]<<endl;
     return;
    }
        cout<<"YES"<<endl;
        for(auto it:odd){
            cout<<it<<" ";
        }cout<<endl;
    //  for(auto it:even){
    //     cout<<it<<" ";
    //  }cout<<endl;
    //  for(auto it: odd){
    //     cout<<it<<" ";
    //  }cout<<endl;
    //  cout<<endl;
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