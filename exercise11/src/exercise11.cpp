#include "exercise11.hpp"

/* Implement the required functions here */
long long fiboIte(long long n) {
    long long a = 0;
    long long b = 1;
    for (long long i = 0; i < n; i++) {
        long long tmp = a;
        a = b;
        b = tmp + a;
    }
    return a;
}

long long fiboRec(long long n) {
    if (n == 0) { return 0; }
    if (n == 1) { return 1; }
    return fiboRec(n - 1) + fiboRec(n - 2);
}

long long factIte(long long n) {
    long long res = 1;
    for (long long i = 1; i <= n; i++) {
        res = res * i;
    }
    return res;
}

long long factRec(long long n) {
    if (n == 1) { return 1; }
    return factRec(n - 1) * n;
}

string convert(long long num, int base) {
    string d = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string res;

    while (num > 0) {
        res = d[num % base] + res;
        num /= base;
    }

    return res;
}

template <typename T>
T add3(T num1, T num2, T num3) {
    return num1 + num2 + num3;
}

template <typename T>
T addN(T n) {
    return n; 
}

template <typename T, typename ... Targs>
T addN(T n, Targs ... rest) {
    return n + addN<T>(rest ...);
}

template <typename T>
T max3(T n1, T n2, T n3) {
    if ((n1 > n2) && (n1 > n3)) {
        return n1;
    }
    if ((n2 > n1) && (n2 > n3)) {
        return n2;
    }
    return n3;
}

template <typename T>
T maxN(T n) {
    return n;
}

template <typename T>
T maxN(T n, T m) {
    if (n > m) return n;
    return m;
}

template <typename T, typename ...Targs>
T maxN(T n, Targs ... rest) {
    vector<T> vec = {rest...};
    T max = n;
    for (auto &i:vec) {
        if (i > max) {
            max = i;
        }
    }
    return max;
}

template <typename T, typename ...Targs>
double avgN(T n, Targs ... rest) {
    vector<T> vec = {rest...};
    T sum = n;
    for (auto &i:vec) {
        sum += i;
    }
    double size = (vec.size() + 1);
    double res = sum / size;
    return res;
}