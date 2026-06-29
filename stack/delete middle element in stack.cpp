#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void deleteMiddle(stack<int>& st) {
    vector<int> elements;

    // Transfer stack elements to a vector
    while (!st.empty()) {
        elements.push_back(st.top());
        st.pop();
    }

    // Compute middle index
    int midIndex = elements.size() / 2;

    // Erase the middle element
    elements.erase(elements.begin() + midIndex);

    // Push elements back to the stack in reverse order
    for (int i = elements.size() - 1; i >= 0; --i) {
        st.push(elements[i]);
    }
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    deleteMiddle(st);

    // Print the remaining stack
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
