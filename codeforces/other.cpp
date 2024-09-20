#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Check if N is even
    if (N % 2 != 0) {
        cout << "no" << endl;
        return 0;
    }

    vector<int> primes;
    int limit = sqrt(N);

    // Function to check if a number is prime
    auto isPrime = [](int num) -> bool {
        if (num <= 1) return false;
        if (num <= 3) return true;
        if (num % 2 == 0 || num % 3 == 0) return false;
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) return false;
        }
        return true;
    };

    // Generate primes up to limit
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    bool found = false;

    // Check for prime triplets
    for (int i = 0; i < primes.size(); i++) {
        for (int j = i + 1; j < primes.size(); j++) {
            for (int k = j + 1; k < primes.size(); k++) {
                int sum = primes[i] * primes[i] + primes[j] * primes[j] + primes[k] * primes[k];
                if (sum == N) {
                    cout << "yes" << endl;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        if (found) break;
    }

    if (!found) {
        cout << "no" << endl;
    }

    return 0;
}
