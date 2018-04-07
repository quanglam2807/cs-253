#include "exercise1.hpp"

//Print "Hello World" to the default system output
void task1() {    
    cout << "Hello World" << endl;
}
//Ask the user to enter their first name and print "Hello USERNAME"
void task2() {
    string firstName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Hello " << firstName << endl;
}
//Ask a user to enter their full name and print the initials (ie. John Doe should yield JD)
void task3() {
    string name;
    cout << "Enter your full name: ";
    cin.ignore();
    getline(cin, name);
    cout << name.at(0);
    for ( unsigned int i = 0; i < name.length() - 1; i = i + 1 ) {
        if (name.at(i) == ' ') {
            cout << name.at(i + 1);
        }
    }
    cout << endl;
}
//Ask a user to enter their age and print "Minor" (if age is less than 21) or "Major" (if age is 21+)
void task4() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 21) {
        cout << "Minor" << endl;
    } else {
        cout << "Major" << endl;
    }
}
//Generate a random number, print it, and print whether it's odd or even
void task5() {
    long b = rand();
    cout << b << endl;
    int rem = b % 2;
    if (rem == 0) {
        cout << "even";
    } else {
        cout << "odd";
    }
    cout << endl;
}
//Print all numbers between 1 and 20 (inclusive).
void task6() {
    for( int a = 1; a < 21; a = a + 1 ) {
      cout << a << " ";
    }
    cout << endl;
}
//Calculate and print sum of all numbers between 1 and 100 (inclusive).
void task7() {
    int sum = 0;
    for( int a = 1; a < 101; a = a + 1 ) {
        sum += a;
    }
    cout << "Sum of all numbers between 1 and 100 is " << sum << endl;
}
//Calculate and print sum of all multiples of 253 between 1 and 2018 (inclusive).
void task8() {
    int sum = 0;
    for( int a = 1; a < 2019; a = a + 1 ) {
        if (a % 253 == 0) {
            sum += a;
        }
    }
    cout << "Sum of all multiples of 253 between 1 and 2018 is " << sum << endl;
}
//Calculate and print sum and product of all numbers between 1 and 20 (inclusive). Hint: use a proper data type to hold a very large value of the product. 
void task9() {
    unsigned long long int product = 1;
    for( int a = 1; a < 21; a = a + 1 ) {
        product = product * a;
    }
    cout << "Product of all numbers between 1 and 20 is " << product << endl;
}
//Print all numbers between 1 and 100 (inclusive) replacing all multiples of 3 with "fuzz", multiples of 5 with "buzz", multiples of 3 and 5 with "zzz".
void task10() {
    for( int a = 1; a < 101; a = a + 1 ) {
        if ((a % 3 == 0) && (a % 5 == 0)) {
            cout << "zzz";
        } else if (a % 3 == 0) {
            cout << "fuzz";
        } else if (a % 5 == 0) {
            cout << "buzz";
        } else {
            cout << a;
        }
        cout << " ";
    }
    cout << endl;
}
