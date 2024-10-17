#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    int n;
    cin >> n;
    int note, ans=0;
    while(n--){
        cin >> note;
        if (note>b && note<c){
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
