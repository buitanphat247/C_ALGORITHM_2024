#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<int, int> c;
    for (int i = 0; i < n; ++i) {
        if (c.find(a[i]) == c.end()) {
            c[a[i]] = i + 1;
        }
    }

    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    for (int i = 0; i < m; ++i) {
        if (c.find(b[i]) != c.end()) {
            cout << c[b[i]] << " ";
        } else {
            cout << 0 << " ";
        }
    }

    return 0;
}
