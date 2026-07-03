#include <iostream>
using namespace std;

class myQueue {
    
    // Array to store queue elements.
    int* arr;
    
    //Maximum number of elements the queue can hold.
    int capacity;
    
    // Current number of elements in the queue.
    int size;
    
public:

    myQueue(int c) {
        capacity = c;
        arr = new int[capacity];
        size = 0;
    }
}
