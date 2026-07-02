
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int thirdLargest(vector<int> &arr) {
    int n = arr.size();
    
    // If the array has less than 3 elements, return -1
    if (n < 3) {
        return -1;
    }
    
    // Sort the array 
    sort(arr.begin(), arr.end());
    
    // Return the third largest element 
    return arr[n-3];
}

int main() {
    vector<int> arr = {2, 4, 1, 3, 5};
    cout << thirdLargest(arr) << endl;

    return 0;
}
