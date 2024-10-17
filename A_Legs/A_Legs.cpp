#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve() {
    int t,n;
    cin >> t;
    for (int i=0;i<t;i++){
        cin >> n;
        cout << (n/4)+(n%4)/2 << endl; //endl = \n
    }
}

int main() {
    fastio;

    solve();

    return 0;
}
