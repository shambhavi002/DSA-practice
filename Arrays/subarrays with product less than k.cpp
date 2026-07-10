#include <iostream>
#include <vector>

using namespace std;

int countSubarray(vector<int>& arr, int k)
{
    int count = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        long long product = arr[i];

        // Single-element subarray
        if (product < k)
            count++;

        // Extend the subarray
        for (int j = i + 1; j < arr.size(); j++)
        {
            product *= arr[j];

            // Count the subarray if product is less than k
            if (product < k)
                count++;
            else
                break;
        }
    }

    return count;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    int k = 10;

    cout << countSubarray(arr, k) << "\n";

    return 0;
}
