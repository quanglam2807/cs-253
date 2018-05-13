/*
 * Assignment: Exercise 12
 * Author: Quang Lam
 * Date: 2018-05-12
 */
#ifndef EXERCISE12_H
#define EXERCISE12_H

#include <bits/stdc++.h>

using namespace std;

// Declare a function that uses an array.
template <typename T>
T sumArray(T [], int);

// Declare a function that uses a vector.
template <typename T>
T sumVector(vector<T>);

// Declare a function that uses a deque.
template <typename T>
T sumTwoEnds(deque<T>);

// Declare a function that uses a list.
template <typename T>
T sumList(list<T>, int);

// Declare a function that uses a stack.
template <typename T>
T getTopOfStack(stack<T>);

// Declare a function that uses a queue.
template <typename T>
T getFrontOfQueue(queue<T>);

// Declare a function that uses a priority_queue.
template <typename T>
T getGreatestValue(priority_queue<T>);

// Declare a function that uses a set.
template <typename T>
bool existsInSet(set<T>, T);

// Declare a function that uses a map.
template <typename T>
T getValAtKey(map<string, T>, string);

// Declare a function that uses any other container.
// Define a function that uses a forward_list.
template <typename T>
T sumForwardList(forward_list<T>);

#endif
