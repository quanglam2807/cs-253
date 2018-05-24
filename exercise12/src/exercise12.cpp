#include "exercise12.hpp"

// Define a function that uses an array.
// Return sum of an array
template <typename T>
T sumArray(T arr[], int size) {
    T sum = arr[0];
    for (int i=1; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Define a function that uses a vector.
// Return sum of an vector
template <typename T>
T sumVector(vector<T> vec) {
    auto it = vec.begin();
    T sum = *it;
    it++;
    for (; it != vec.end(); ++it) {
        sum += *it;
    }
    return sum;
}

// Define a function that uses a deque.
// Return sum of two ends of a deque
template <typename T>
T sumTwoEnds(deque<T> d) {
    return d.front() + d.back();
}

// Define a function that uses a list.
// Return sum of list
template <typename T>
T sumList(list<T> l) {
    auto it = l.begin();
    T sum = *it;
    it++;
    for (; it != l.end(); ++it) {
        sum += *it;
    }
    return sum;
}

// Define a function that uses a stack.
// Return the last-in element of a stack
template <typename T>
T getTopOfStack(stack<T> s) {
    return s.top();
}

// Define a function that uses a queue.
// Return the first-in element of queue
template <typename T>
T getFrontOfQueue(queue<T> q) {
    return q.front();
}

// Define a function that uses a priority_queue.
// Return the greatest value of a priority queue 
template <typename T>
T getGreatestValue(priority_queue<T> q) {
    return q.top();
}

// Define a function that uses a set.
// Return whether a set contains an element or not.
template <typename T>
bool existsInSet(set<T> s, T val) {
    return s.count(val) != 0;
}

// Define a function that uses a map.
// Return value at a key
template <typename T>
T getValAtKey(map<string, T> m, string key) {
    return m.at(key);
}


// Define a function that uses any other container.
// Define a function that uses a forward_list.
// Return sum of forward_list
template <typename T>
T sumForwardList(forward_list<T> l) {
    auto it = l.begin();
    T sum = *it;
    it++;
    for (; it != l.end(); ++it) {
        sum += *it;
    }
    return sum;
}