#include <iostream>
#include <vector>
using namespace std;

class Matrix {
public:
    vector<vector<int>> a;

    Matrix operator+(const Matrix &other) {
        Matrix result;
        int rows = a.size();
        int cols = a[0].size();
        result.a.resize(rows, vector<int>(cols));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.a[i][j] = a[i][j] + other.a[i][j];
            }
        }
        return result;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        Matrix x, y;
        x.a.resize(n, vector<int>(m));
        y.a.resize(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> x.a[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> y.a[i][j];
            }
        }
        Matrix result = x + y;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << result.a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna