 #include<bits/stdc++.h>
 using namespace std;
 #define int long long
 //  1   2   3   4   5 
 //  w1  w2  w3  w4  w5
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int i = 0,j = n-1,ans = 0;
    int sum1=a[0], sum2=a[n-1];
    while(i<j){
         if(sum1==sum2){
          ans = max(ans,i+1+n-j);
        }
        if(sum1>sum2){
          j--;
          sum2+=a[j];
        }                                  
        else if(sum2>=sum1){               
            i++;
           sum1+=a[i];
        }
    }
    cout<<ans<<endl;
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