#include<bits/stdc++.h>
using namespace std;
vector<int>solve(vector<int>&op,int steps,int sum){
     if(steps == 0){ 
        return op;
     }
     
     sum = sum + 1;
     op.push_back(sum);
     solve(op,steps-1,sum);
return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>op;
    vector<int>ans = solve(op,n,0);
    return 0;
}