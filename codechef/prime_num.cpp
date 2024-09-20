#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false; // 1 and numbers less than 1 are not prime
    if (n == 2 || n == 3)
        return true; // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0)
        return false; // Eliminate multiples of 2 and 3

    // Check divisibility for other numbers
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;  // Input number of test cases
    while (t--) {
        int num;
        cin >> num;  // Input number to check

        if (isPrime(num))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
