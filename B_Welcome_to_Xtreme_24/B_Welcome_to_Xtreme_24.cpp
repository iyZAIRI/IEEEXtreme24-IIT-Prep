#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve() {
    string xtreme = "IEEEXtreme24";
    string input;
    cin >> input;
    for(int i=0;i<12;i++){
        if(input[i] == '_'){
            cout << xtreme[i];
        }
    }

}

int main() {
    fastio;

    solve();

    return 0;
}
