#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int max_val = *max_element(a, a + n);
        bool flag1 = true, flag2 = true;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                flag1 = false;
                if (b[i] <= max_val) {
                    flag2 = false;
                    break;
                }
            }
            if (b[i] > a[i]) {
                flag1 = false;
                if (a[i] <= max_val) {
                    flag2 = false;
                    break;
                }
            }
        }
        if (flag1 && flag2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}



