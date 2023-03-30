#include<bits/stdc++.h>
using namespace std;
#define int long long

int binarysearch(int arr[],int n,int x){
   int l = 0,h = n-1;
   while(l<=h){
      int m = (l+h)>>1;
      if(arr[m]>x) h = m-1;
      else if(arr[m]==x) return m;
      else l = m+1;
   }
   return -1;
}

int possible(int index,string&str,vector<int>& dp,map<string,string>& mpp ,string ans,set<string>& disjoint, int modulo){
    if(index<0){

        auto it=disjoint.find(ans);

        if(it==disjoint.end()){

            disjoint.insert(ans);

            return 1;
        }
        return 0;
    }
    if(dp[index]!=-1){
        return dp[index];
    }
     int one=possible(index-1,str,dp,mpp,mpp[str.substr(index,+1)+ans],disjoint,modulo);
     int two=0;
    if(index-1>=0 && mpp.find(str.substr(index-1,2))!=mpp.end()){
        two=possible(index-2,str,dp,mpp,mpp[str.substr(index-1,2)]+ans,disjoint,modulo);

    }
    return dp[index]=(one+two)%998244353;
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
      string str;
      cin>>str;
      int n=str.length();

    vector<int>dp(n,-1);

    map<string,string>mpp{{"a","01"},{"b","10"},{"ab","010"},{"ba","101"}};
    set<string>disjoint;
    int p =possible(n-1,str,dp,mpp,"",disjoint,998244353);
    cout<<p<<endl;
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}