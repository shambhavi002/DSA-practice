#include <iostream>
#include <algorithm>
using namespace std;

string sortString(string &s)
{

    // Sort all characters in ascending order.
    sort(s.begin(), s.end());

    return s;
}

// Driver Code
int main()
{
    string s = "xzy";

    cout << sortString(s);

    return 0;
}
