#include <bits/stdc++.h>

using namespace std;



int main()
{
    // include <iostream> using namespace std;  void bubbleSort(int arr[], int n) {     for (int i = 0; i < n; i++) {         for (int j = 0; j < n - i; j++) {             if (arr[j] > arr[j + 1]) {                 int temp = arr[j];                 arr[j] = arr[j + 1];                 arr[j + 1] = arr[j];             }         }     } }  int main() {     int n;     cin >> n;     int arr[n];     for (int i = 0; i < n; i++) cin >> arr[i];     bubbleSort(arr, n);     for (int i = 0; i < n; i++) {         cout << arr[i];         if (i < n - 1) cout << " ";     }     cout << endl;     return 0; }

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna