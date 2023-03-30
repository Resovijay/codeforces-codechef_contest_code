#include<bits/stdc++.h>
using namespace std;
#define int long long

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
      int n,x;
      cin>>n;
      int arr[n];
      for(int i =0;i<n;i++){
        cin>>arr[i];
      }
      int i = 0;
      int j = n-1;
      vector<int>v;
      while(i<j){
         x = arr[j]-arr[i];
        v.push_back(x);
        i++;
        j--;
      }

      bool check=false;
      for(int i=0;i<(n/2)-1;i++){
        if(v[i]<v[i+1]) check = true;
      }
     if(check==false) cout<<v[0]<<endl;
     else cout<<"-1"<<endl;
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}

