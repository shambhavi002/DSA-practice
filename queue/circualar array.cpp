class myQueue {
private:

    // Fixed-size array to store queue elements
    int* arr;

    // Index of the front element
    int front;

    // Current number of elements in the queue
    int size;

    // Maximum capacity of the queue
    int capacity;

public:

    // Constructor to initialize the queue with given capacity
    myQueue(int cap) {
        capacity = cap;
        arr = new int[capacity]; 
        front = 0;
        size = 0;
    }
};
