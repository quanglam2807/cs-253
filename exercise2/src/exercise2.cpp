#include "exercise2.hpp"

//Task 1 implementation
// Take name as a parameter and return "Hello, <name>"
string task1(string name) {    
    return "Hello, " + name;
}

//Task 2 implementation
// Take full name as a parameter and return initials
string task2(string fullName) {
    string initials = "";
    bool isInitial = true;

    for ( unsigned int i = 0; i < fullName.length(); i = i + 1 ) {
        if (isInitial && fullName.at(i) != ' ') {
            initials += fullName.at(i);
            isInitial = false;
        }
        if (!isInitial && fullName.at(i) == ' ') {
            isInitial = true;
        }
    }
    return initials;
}

//Task 3 implementation
// Takes age as a parameter and return boolean true if less than 21
bool task3(int age) {
    if (age < 21) { return true; }
    return false;
};

//Task 4 implementation
// Take number as a parameter and return boolean true if it's odd, false otherwise
bool task4(int num) {
    return (num % 2 != 0);
}

//Task 5 implementation
// Take number (n) as a parameter and return sum of all numbers between 1 and n (inclusive)
int task5(int n) {
    int sum = 0;
    for( int a = 1; a <= n; a = a + 1 ) {
        sum += a;
    }
    return sum;
};

//Task 6 implementation
// Take number (n) as a parameter and simulate coin flips until there are n heads in a row. Return number of flips. Initialise randomizer as follows: srand(0);
int task6(int n) {
    srand(0);
    int count = 0;
    int flipCount = 0;
    int r;

    while (flipCount < n) {
        r = rand();
        count += 1;
        if (r % 2 == 0) {
            flipCount += 1;
        } else {
            flipCount = 0;
        }
    }

    return count;
};

//Task 7 implementation
// Take two numbers (m and n) as parameters and return number of multiples of 10 between m and n (inclusive)
int task7(int m, int n) {
    int count = 0;
    for( int a = m; a <= n; a = a + 1 ) {
        if (a % 10 == 0) {
            count += 1;
        }
    }
    return count;
};


//Task 8 implementation
// Take a string and two numbers (m and n) as parameters and return a substring between m and n (inclusive)
string task8(string str, int m, int n) {
    return str.substr(m, n - m + 1);
}

//Task 9 implementation
// Take 3 numbers (a, b, c) as parameters and return their average
float task9(int a, int b, int c) {
    float result = (a + b + c) / (float)3;
    return result;
}

//Task 10 implementation
// Take 3 numbers (a, b, c) as parameters and return the greatest of them
float task10(float a, float b, float c) {
    float result = a;
    if (b > a) result = b;
    if (c > result) result = c;
    return result;
}
