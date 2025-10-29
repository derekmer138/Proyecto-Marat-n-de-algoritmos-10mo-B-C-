#include <bits/stdc++.h>
using namespace std;

// Ejercicio 8: Mochila 0/1
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, W;
    cin >> n >> W;
    vector<int> wt(n), val(n);
    for (int i = 0; i < n; ++i) cin >> wt[i] >> val[i];
    vector<int> dp(W+1,0);
    for (int i = 0; i < n; ++i) {
        for (int w = W; w >= wt[i]; --w) dp[w] = max(dp[w], dp[w-wt[i]] + val[i]);
    }
    cout << dp[W] << "\n";
    return 0;
}
