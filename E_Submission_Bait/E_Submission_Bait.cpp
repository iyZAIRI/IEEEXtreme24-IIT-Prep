#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve() {
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> tab(n); //equivalent to int tab[n], but better;
        for(int i=0;i<n;i++){
            cin >> tab[i];
        }
        bool can = false;
        for(int i=0;i<n;i++){
            if(count(tab.begin(),tab.end(),tab[i])%2==1){
                can = true;
                cout << "YES" << endl;
                break;
            }
        }
        if (can==false){
            cout << "NO" << endl;
        }
    }

}

int main() {
    fastio;

    solve();

    return 0;
}
