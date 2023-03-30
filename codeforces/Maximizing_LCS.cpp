#include <bits/stdc++.h>
using namespace std;
int main() {
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        sting str2 = s;
       reverse(st1.begin(),st1.end());
        // bas isko tabulate kar //// striver wala code likh de   koi function mat bana .......
       int f(int i,int j,string a ,string b,vector<vector<int>>&dp){
    if(i<0||j<0) return 0;
    if(dp[i][j]=!-1)return dp[i][j];
    if(a[i]==b[j]) return dp[i][j]=1+f(i-1,j-1,a,b,dp);
    
    return dp[i][j]=max(f(i-1,j,a,b,dp),f(i,j-1,a,b,dp));  
   
} 
        
        
        
}
	return 0;
}