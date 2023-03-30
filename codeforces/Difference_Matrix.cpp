 #include<bits/stdc++.h>
 using namespace std;
 #define int long long
 void solve(){
    int n ;
    cin>>n;
   
   vector<int>odd;
   vector<int>even;
   for(int i = 1;i<(n*n);i++){
    if(i%2==0) even.push_back(i);
    else odd.pudh_back(i);
   }

   for(int i = 0;i<even.size();i++){
    for(int j = 0 ;j<even.size();j++){
        cout<<even[i][j]<<" ";
    }
   }cout<<endl;

     for(int i = 0;i<odd.size();i++){
    for(int j = 0 ;j<odd.size();j++){
        cout<<odd[i][j]<<" ";
    }
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