#include <bits/stdc++.h>
using namespace std;

// Ejercicio 46: Ordenamiento y clasificación
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v) cin >> x;
    sort(v.begin(), v.end());
    for (int x : v) cout << x << " ";
    cout << "\n";
    return 0;
}
