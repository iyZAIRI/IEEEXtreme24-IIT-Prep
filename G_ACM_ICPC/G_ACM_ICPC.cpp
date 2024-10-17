#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void checkScores(vector<int> scores, int scoresSum){
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<6;k++){
                int ijk_sum;
                ijk_sum = scores[i] + scores[j] + scores[k];
                if(ijk_sum!=0 && (scoresSum/2 == ijk_sum)){
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
}
void solve() {
    vector<int> scores(6);
    int scoresSum = 0;
    for(int i=0;i<6;i++){
        cin >> scores[i];
        scoresSum += scores[i];
    }
    if (scoresSum%2 != 0){
        cout << "NO" << endl;
    } else if (scoresSum==0){
        cout << "YES" << endl;
    } else {
        checkScores(scores, scoresSum);
    }

}

int main() {
    fastio;

    solve();

    return 0;
}
