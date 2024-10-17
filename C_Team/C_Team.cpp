#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve() {
    int n;
    cin >> n;
    int one,two,three, ans=0;
    while(n--){
        cin >> one >> two >> three;
        if(one+two+three>=2){
            ans++;
        }
    }
    cout << ans;

}

int main() {
    fastio;

    solve();

    return 0;
}
