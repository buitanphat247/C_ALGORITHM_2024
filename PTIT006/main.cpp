#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generateSpiralMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (num <= n * n) {
        // Move right
        for (int j = left; j <= right; j++) {
            matrix[top][j] = num++;
        }
        top++;

        // Move down
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;

        // Move left
        for (int j = right; j >= left; j--) {
            matrix[bottom][j] = num++;
        }
        bottom--;

        // Move up
        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }

    return matrix;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> spiralMatrix = generateSpiralMatrix(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << spiralMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
