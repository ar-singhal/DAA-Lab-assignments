#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<char> A(n);
        for (char& x : A) cin >> x;
        vector<int> c(26);
        for (const char& x : A)
            c[x - 'a']++;
        int f = 0;
        char who = '\0';
        for (int i = 0; i < 26; i++) {
            if (c[i] > f) {
                f = c[i];
                who = i + 'a';
            }
        }
        if (f == 1) cout << "No Duplicates found\n";
        else cout << who << " - " << f << '\n';
    }
    return 0;
}
