#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isPrime(int num) {
  if (num <= 1) {
    return false;
  }
  if (num <= 3) {
    return true;
  }
  if (num % 2 == 0 || num % 3 == 0) {
    return false;
  }
  
  for (int i = 5; i * i <= num; i += 6) {
    if (num % i == 0 || num % (i + 2) == 0) {
      return false;
    }
  }
  
  return true;
}

void findPrimeTriplet(int N) {
  vector<int> primes;
  int limit = sqrt(N);
  
 
  for (int i = 2; i <= limit; i++) {
    if (isPrime(i)) {
      primes.push_back(i);
    }
  }
  
  bool found = false;
  
  
  for (int i = 0; i < primes.size(); i++) {
    for (int j = i + 1; j < primes.size(); j++) {
      for (int k = j + 1; k < primes.size(); k++) {
        int sum = primes[i] * primes[i] + primes[j] * primes[j] + primes[k] * primes[k];
        if (sum == N) {
      
            cout<<"yes"<<"\n";
          found = true;
          break;
        }
      }
      if (found) {
        break;
      }
    }
    if (found) {
      break;
    }
  }
  
  if (!found) {
    cout <<"no" << endl;
  }
}

int main() {
  int N;
  cin >> N;
  findPrimeTriplet(N);
  return 0;
}
