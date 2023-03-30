#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<double,double>>v;
    int n,k;
    cin>>n>>k;
    double sum = 0.000000000000;
    for(int i = 0;i<n;i++){
        double a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    for(int i = 0;i<n-1;i++){
        double x =(v[i].first - v[i+1].first);
        double y =(v[i].second - v[i+1].second);
        double d = sqrt((x*x)+(y*y));
        sum+=d;
    }
    double time = (sum*1.0/50)*k;
    cout<<fixed<<setprecision(9)<<time;
    return 0;
}