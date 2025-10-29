#include <bits/stdc++.h>
using namespace std;

// Ejercicio 12: Búsqueda binaria
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int &x : v) cin >> x;
    sort(v.begin(), v.end());
    while (q--) {
        int target;
        cin >> target;
        int idx = lower_bound(v.begin(), v.end(), target) - v.begin();
        if (idx < n && v[idx] == target) cout << "Encontrado\n";
        else cout << "No encontrado\n";
    }
    return 0;
}
