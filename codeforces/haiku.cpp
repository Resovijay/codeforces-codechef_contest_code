#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    for(int i = 0;i<3;i++){
        int check = i,count = 0;
        string s;
        getline(cin,s);
        for(int i = 0;i<s.length();i++){
            if(s[i] =='a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u'){
                count++;
            }
        }
        if(check != 1){
            if(count == 5 ) sum++;
        }
        else{
            if(count == 7) sum++;
        }
    }
    if(sum == 3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}