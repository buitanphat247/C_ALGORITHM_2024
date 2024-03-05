#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    sort(heights.begin(), heights.end()); // Sắp xếp các học sinh theo chiều cao tăng dần

    int min_height_diff = INT_MAX;
    for (int i = 0; i <= n - k; ++i) {
        int height_diff = heights[i + k - 1] - heights[i]; // Tính chênh lệch chiều cao của đội có kích thước k
        min_height_diff = min(min_height_diff, height_diff); // Lưu lại chênh lệch chiều cao nhỏ nhất
    }

    cout << min_height_diff << endl; // In ra chênh lệch chiều cao nhỏ nhất
    return 0;
}
