#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        if (n < 10) {
            cout << 1 << '\n' << n << '\n';
            continue;
        }

        vector<int> arr;
        int i = 1;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                arr.push_back(digit * i);
            }
            n /= 10;
            i *= 10;
        }

        cout << arr.size() << '\n';
        for (const int &num : arr) {
            cout << num << ' ';
        }
        cout << '\n';
    }
    return 0;
}
