#include <bits/stdc++.h>
using namespace std;

// Function to apply quadratic transformation
int evaluate(int x, int A, int B, int C) {
    return A * x * x + B * x + C;
}

// Function to transform and sort the array in-place
vector<int> sortArray(vector<int> &arr, int A, int B, int C) {
    int n = arr.size();
    
    vector<int> transformed;
    // Apply the transformation
    for (int i = 0; i < n; i++) {
        transformed.push_back(evaluate(arr[i], A, B, C));
    }

    // Sort the transformed array
    sort(transformed.begin(), transformed.end());

    return transformed;
}

int main() {
    vector<int> arr = {-4, -2, 0, 2, 4};
    int A = 1, B = 3, C = 5;

    vector<int> res = sortArray(arr, A, B, C);

    for (int val : res) {
        cout << val << " ";
    }

    return 0;
}
