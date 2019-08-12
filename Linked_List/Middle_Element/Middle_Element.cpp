#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n, i, j, k;
    list < ll > ::iterator mid, last;
    cin >> t;
    while (t--) {
        list < ll > q;
        cin >> n;
        for (i = 0; i < n; i++) {
            cin >> k;
            q.push_back(k);
        }
        mid = q.begin();
        last = q.begin();
        while (last != q.end() && ++last != q.end()) {
            ++mid;
            ++last;
        }
        cout << * mid << endl;
    }
    return 0;
}
