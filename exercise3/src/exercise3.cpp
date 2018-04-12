#include "exercise3.hpp"

//Assuming the values in the array are grades (0-100), print number of students with 'A', 'B', 'C', 'D' and 'F'.
void task1(int grades[], int size) {
    int countA = 0;
    int countB = 0;
    int countC = 0;
    int countD = 0;
    int countF = 0;

    for ( int i = 0; i < size; i++) {
        if (grades[i] >= 93) {
            countA += 1;
        } else if (grades[i] >= 86) {
            countB += 1;
        } else if (grades[i] >= 73) {
            countC += 1;
        } else if (grades[i] >= 63) {
            countD += 1;
        } else {
            countF += 1;
        }
    }

    cout << "Grade A: " << countA << endl;
    cout << "Grade B: " << countB << endl;
    cout << "Grade C: " << countC << endl;
    cout << "Grade D: " << countD << endl;
    cout << "Grade F: " << countF << endl;

    return;
}

//Find the difference between 100 and the largest element of the array and add this difference to every element in the array. Note: after this function call the largest value in the array must be 100.
void task2(int grades[], int size) {
    int largest = 0;
    for (int i = 0; i < size; i++) {
        if (grades[i] > largest) {
            largest = grades[i];
        }
    }

    for (int i = 0; i < size; i++) {
        grades[i] = grades[i] + (100 - largest);
    }
}

//Calculate and return sum of all elements in an array.
int task3(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
       sum += array[i];
    }
    return sum;
}

//Check if a number is in an array and return true or false
bool task4(int array[], int size, int number) {
    for (int i = 0; i < size; i++) {
       if (array[i] == number) { return true; }
    }
    return false;
}

//Tell if letters of a word are ordered (ie. "buy" would return true, while "bye" - false).
bool task5(string aWord) {
    for (unsigned int i = 0; i < aWord.size() - 1; i++) {
       if (aWord.at(i) > aWord.at(i + 1)) { return false; }
    }
    return true;
}

//Check if a number is in a vector and return true or false
bool task6(vector<int> list, int number) {
    for (int i: list) {
       if (list[i] == number) { return true; }
    }
    return false;
}

//Create a vector of integers of ther specified size, initialize each element of the vector to a random number between 50 and 100, and return the vector.
vector<int> task7(int size) {
    vector<int> result;

    srand(0);
    for (int i = 0; i < size; i++) {
       result[i] = rand() % (100 - 50 + 1) + 50;
    }

    return result;
}

//Return the number of values in the vector below the threshold.
int task8(vector<int> grades, int threshold) {
    vector<int> result;

    int count = 0;
    for (int i: grades) {
        if (grades[i] < threshold) {
            count += 1;
        }
    }

    return count;
}

//Reverse the values in a vector.
vector<int> task9(vector<int> list) {
    vector<int> result;

    for (int i = list.size() - 1; i > -1; i = i - 1) {
        result.push_back(list[i]);
    }

    return result;
}

//Implement sieve of Eratosthenes and return a vector that contains all prime numbers between 1 and threshold.
vector<int> task10(int threshold) {
    vector<int> notPrime;
    for (int i = 0; i <= threshold; i++) {
        notPrime.push_back(false);
    }

    int j;
    for (int i = 2; i <= threshold; i++) {
        if (notPrime[i] == true) { continue; }
        j = 2;
        while (i * j <= threshold) {
            notPrime[i * j] = true;
            j = j + 1;
        }
    }
    
    vector<int> result;
    
    for (int i = 2; i <= threshold; i++) {
        if (!notPrime[i]) {
            result.push_back(i);
        }
    }

    return result;
}
