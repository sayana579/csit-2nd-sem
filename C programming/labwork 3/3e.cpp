#include <iostream>
using namespace std;
int main() {

    int N;
    long long sum = 0; // Use long long for potential large sums

    cout << "Enter N: ";
    cin >> N;

    if (N < 2) {
        cout << "N must be >= 2." << endl;
        return 1;
    }

    for (int i = 1; i <= N; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            sum += (long long)i * j;
        }
    }

    cout << "Sum for N=" << N << " is: " << sum << endl;

    return 0;
}
