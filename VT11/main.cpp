#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a[100000];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a+1, a + n-1);

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
