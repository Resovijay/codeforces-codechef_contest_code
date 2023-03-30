#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        // counting frequency of lowercase and uppercase letters
        vector<int> lc(26), uc(26);
        for(int i=0; i<n; i++) {
            if(islower(s[i])) lc[s[i]-'a']++;
            else uc[s[i]-'A']++;
        }

        // counting initial burles
        int burles = 0;
        for(int i=0; i<26; i++) burles += min(lc[i], uc[i]);

        // sorting frequency arrays in decreasing order of their sum
        vector<pair<int, int>> freq;
        for(int i=0; i<26; i++) freq.push_back({lc[i]+uc[i], i});
        sort(freq.rbegin(), freq.rend());

        // trying to get more burles using allowed operations
        for(int i=0; i<k; i++) {
            bool found = false;
            for(auto f : freq) {
                int l = f.second;
                int u = l - 'a' + 'A';
                if(lc[l] > 0 && uc[u-'A'] > 0) {
                    found = true;
                    burles++;
                    lc[l]--;
                    uc[u-'A']--;
                    break;
                }
            }
            if(!found) {
                for(auto f : freq) {
                    int u = f.second - 'a' + 'A';
                    int l = f.second;
                    if(uc[u-'A'] > 0 && lc[l] > 0) {
                        burles++;
                        uc[u-'A']--;
                        lc[l]--;
                        break;
                    }
                }
            }
        }

        cout << burles << endl;
    }
    return 0;
}
