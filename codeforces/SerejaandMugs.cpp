#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int  i = 0; i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int sum = 0;
    for(int i = 0;i<n-1;i++){
        sum = sum + a[i];
    }
    if(sum<=s) cout<<"YES";
    else cout<<"NO";
    return 0;
}