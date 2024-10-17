#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

bool isPalindrom(string s){
    string pal = s;
    reverse(pal.begin(),pal.end());
    return s == pal;
}

void solve() {
    string s;
    
    cin >> s;

    while(isPalindrom(s) && s.length() > 0){
        s.pop_back(); //remove last element of s
    }
    
    cout << s.length();
}

int main() {
    fastio;

    solve();

    return 0;
}
