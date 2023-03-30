#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n ;
    cin>>n;
    int alice = 0;
    int bob = 0;
    bool alice_takes = false;
    int rem = n;
    rem--;
    alice+=1;
    //int count = 0;
    for(int i =2;rem>0;i+=2){
        if(i+i+1<=rem){
            rem-=(i+i+1);
            if(alice_takes){
                alice+=(i+i+1);
            }
            else{
                bob+=(i+i+1);
            }
            }
            else{
                if(alice_takes){
                    alice+=rem;
                }
                else{
                    bob+=rem;
                }
                rem=0;
            }
        alice_takes^=true;
        }
       
    cout<<alice<<" "<<bob<<endl;
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