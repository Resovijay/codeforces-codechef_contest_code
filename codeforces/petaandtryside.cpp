#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 1;i<n;i++){
        cin>>arr[i];
    }
      int cnt,maxi = 0;
    for(int i = 0;i<n;i++){
        cnt = 0;
        if(i == 0){
            for(int j = i+1;j<n;j++){
               if(arr[j]<=arr[j-1]) cnt++;
               else  break;
            }
            if(maxi< cnt + 1){
                maxi = cnt + 1;
            }
            cnt = 0;
        }
       else if(i == n-1){
            for(int j = i-1;j>=0;j--){
                if(arr[j]<=arr[j+1]) cnt++;
                else break;
            }
           if(maxi< cnt + 1){
                maxi = cnt + 1;
            }
           cnt = 0;
        }
        else{
            for(int j = i+1;j<n;j++){
               if(arr[j]<=arr[j-1]) cnt++;
               else break;
            }
            for(int j = i-1;j>=0;j--){
                if(arr[j]<=arr[j+1]) cnt++;
                else break;
            }
             if(maxi< cnt + 1){
                maxi = cnt + 1;
            }
            cnt = 0;
        }

    }
    cout<<maxi<<endl;
 return 0;
}