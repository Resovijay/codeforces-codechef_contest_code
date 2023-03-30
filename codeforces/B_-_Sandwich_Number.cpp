
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    string s;
    cin>>s;
    int n = s.length();
    // 
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        if(s[i]>=65&&s[i]<=90) count1++;
        else{
            count2++;
        }
    }
     if(s[1]=='0') count2--;
     if(isupper(s[1])) count1++;
     if(!isupper(s[n-1])) count1++;
    if(count1!=2||count2!=6) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    }
signed main(){
 
   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif
 
       //Your Code
 solve();
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif
 
   return 0;
}