#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the value of n and m: ";
    cin >> n >> m;

    int HCF = 1;
    // We only need to check up to the smaller of the two numbers
    for (int i = min(n, m); i >= 1; i--) {
        if (n % i == 0 && m % i == 0) {
            HCF = i;
            break; // Found the largest one, so we can stop!
        }
    }

    cout << "HCF: " << HCF;
    return 0;
}