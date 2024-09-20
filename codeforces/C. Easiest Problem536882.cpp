#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin>> n>>k;
    int c = ((n / k) + 1) * k;

    switch (c % k) {
        case 0:
            cout << c << endl;
            break;
        default:
            break;
    }

    return 0;
}
