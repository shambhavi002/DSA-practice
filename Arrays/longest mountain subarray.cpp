#include <bits/stdc++.h>
using namespace std;

int LongestMountain(vector<int> &a)
{

    int ans = 0;  
    int n = a.size(); 
    

    // iterate over the array
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int inc = 0, dec = 0;
       // check weather it make it is increase first or not
        while (j < n && a[j] > a[j - 1])
        {
            inc = 1;
            j++;
        }
        // check weather it is decreasing after checking the increaseing part
        while (j < n && a[j] < a[j - 1])
        {
            dec = 1;
            j++;
        }
        // if mountain
        if (inc && dec)
        {
            ans = max(j - i, ans);
            inc = 0, dec = 0;
        }
    }
    // return maximum length 
    return ans;
}

int main()
{
    vector<int> d = {1, 3, 1, 4,
                     5, 6, 7, 8,
                     9, 8, 7, 6, 5};

    cout << LongestMountain(d)
         << endl;

    return 0;
}
