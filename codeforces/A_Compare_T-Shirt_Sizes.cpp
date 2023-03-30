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
    string a,b;
    int n,m;
    cin>>a>>b;
    n=a.length();
    //cout<<n<<endl;
    m=b.length();
    //cout<<m<<endl;
    if(a[n-1]=='S'&& b[m-1]=='S'){
        
      if(n>m) cout<<"<"<<endl;
      else if(n==m) cout<<"="<<endl;
      else cout<<">"<<endl;
    }

    else if(a[n-1]=='L'&& b[m-1]=='L'){

      if(n<m) cout<<"<"<<endl;
      else if(n==m) cout<<"="<<endl;
      else cout<<">"<<endl;
    }
    
    else if(b[n-1]=='M'){
        if(a[n-1]=='S')
         cout<<"<"<<endl;
         else cout<<">"<<endl;
    }
     else if(a[n-1]=='M'){
        if(b[n-1]=='S')
         cout<<">"<<endl;
         else cout<<"<"<<endl;
    }
    else if(b[n-1]=='M'){
        if(a[n-1]=='L') cout<<">"<<endl;
        else cout<<"<"<<endl;
    }
    else if(a[n-1]=='M'){
        if(b[n-1]=='L') cout<<"<"<<endl;
        else  cout<<">"<<endl;
    }

    
     else if(a[n-1]=='M'&& b[n-1]=='M'){
         cout<<"="<<endl;
    }
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}