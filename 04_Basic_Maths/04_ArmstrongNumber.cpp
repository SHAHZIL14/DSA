#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of n: ";
    cin >> n;

    int dupN = n;
    int sum = 0;

    while (n > 0) {
        int ld = n % 10;
        cout << ld << endl;
        sum = sum + (ld * ld * ld);
        n /= 10;
    }

    cout << sum << " -> " << dupN;

    return 0;
}