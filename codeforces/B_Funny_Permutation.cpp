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
      //vector<int>a;
      int n;
      cin>>n;
      //a.push_back(n);
      if(n%2==0){
         for(int i = n;i>=1;i--){
            cout<<i<<" ";

         }
         cout<<endl;
      }
      else{
         if(n==3) cout<<"-1"<<endl;
         else{
            int k=n/2;
            while(k--)
            {
                cout<<n<<" ";
                n--;
            }
            for(int i=1;i<=n;++i) cout<<i<<" ";
            cout<<endl;
         }
      }
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}