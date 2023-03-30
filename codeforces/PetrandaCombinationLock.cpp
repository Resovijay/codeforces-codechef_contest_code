#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,flag = 0;
    cin>>n;
    int a[n];
    for(int  i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<(1<<n);i++){
        int sum = 0;
        for(int  j = 0;j<n;j++){
            if(i&(1<<j)) sum+=a[j];
            else sum-=a[j];
        }
        if(sum % 360 == 0){
             flag = 1;
             break;
        }
    }
    if(flag == 1) cout<<"YES";
        else cout<<"NO";
 return 0;
} 