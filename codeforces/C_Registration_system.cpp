#include<bits/stdc++.h>
using namespace std;
//#define int long long

signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
    int t;
    cin>>t;
    unordered_map<string,int> m;
    while(t--){
      string s;
      cin>>s;
      if(m[s]==0)
      {
        m[s]++;
        cout<<"OK"<<endl;
      }

      else
      {
       string temp = to_string(m[s]);
       cout<<s+temp<<endl;
       m[s]++;
      }
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}